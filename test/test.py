import subprocess as sb
import pexpect
import threading

def read_tests():
    with open('cases.txt', 'r', encoding='utf8') as f:
        return f.read().splitlines()

def run_tests():
    tests = read_tests()
    test_inputs = [i.split(" ")[0] for i in tests]
    test_outputs = [i.split(" ")[1:] for i in tests]
    
    t = threading.Timer(10, timeout)

    for c,i in enumerate(test_inputs):
        child = pexpect.spawn('./a.out', encoding='utf-8')
        child.sendline(str(i))
        program_output = ''.join([i.split(': ')[1] for i in child.read().splitlines()[1:]])
        test_output = ''.join(test_outputs[c])
        try:
            assert program_output == test_output
            print(f"\033[92mTest {c} Input:{i} successful\033[00m")
        except AssertionError:
            print(f"\033[91mTest {c} Input:{i} failed!\033[00m")

        t.cancel()
        
def timeout():
    print('Timeout')
    exit(3)


if __name__ == '__main__':
    sb.check_call("g++ ../src/*.cpp", shell=True)
    run_tests()
    sb.check_call(["rm", "a.out"], stdout = sb.DEVNULL, stderr = sb.DEVNULL)
