# FSE_2023_G4
# Decimal Converter

Hi! We are group 4 students in **Foundations of Software Engineering class** and this is our final project. **"Decimal Converter"** is a versatile and educational application that allows users to effortlessly convert numbers between decimal, hexa, binary, and Roman numerals. This project empowers users to explore different numerical systems while providing a practical tool for everyday use. 


## Table of Contents 

 - [Keys Features](#keys-features)
 - [Quickstart](#quickstart)
 - [Build & Test the program](#build--test-the-program)
 - [Development](#development) 
 - [Credit](#credit)

## Keys Features

-   Decimal to Binary and vice versa: Convert between decimal and binary numbers, ideal for programmers.
-   Decimal to Hexadecimal and vice versa: Convert between decimal and binary numbers, ideal for programmers.
-   Decimal to Roman Numerals and vice versa: Easily transform decimal numbers into Roman numerals and vice versa

## Quickstart

There are 3 main steps to build and test the program.

 1. Update and install necessary's packages 
    ``` bash 
    sudo apt-get update
    sudo apt-get install -y build-essential
    sudo apt-get install git
    ```
 2. Clone the repository
    ``` bash 
    git clone https://github.com/AxoyTO/FSE_2023_G4.git
    cd FSE_2023_G4
    ```
     
 3. [Build & Test the program](#build--test-the-program)

## Build & Test the program

 1. Using Makefile
    ``` bash 
    make -f Makefile 
    ```
    or just
    ``` bash 
    make
    ```
    Testing the program
    ``` bash 
    python3 test/test.py 
    ```
    or just
    ``` bash 
    make test
    ```
 3. Using Dockerfile
    ``` bash 
    docker build -t project:v1.0 -f Dockerfile .
    docker run -it --entrypoint bash project:v1.0 
    ```
    Testing the program
    ``` bash 
    ./test/test 
    ```

## Development 

The source code is separated into three files:

> [main.cpp](https://github.com/AxoyTO/FSE_2023_G4/blob/dev/src/main.cpp)`
-   In the  `main.cpp`  file, it is the code for launching application and separately analyze command line arguments. In this file, you can change and add more features about the converting numbers.
> [converter.cpp](https://github.com/AxoyTO/FSE_2023_G4/blob/dev/src/converter.cpp)
-   In the  `converter.cpp`  file, it is the code for defining conditions of each feature to convert numbers in several types. In this file, you can change, add and delete conditions of each feature about the converting numbers to see new result and can modify to be a new converter.
> [converter.hpp](https://github.com/AxoyTO/FSE_2023_G4/blob/dev/src/converter.hpp)
- In the  `converter.hpp`  file, you can find source code for the library functions.



## Credit

Group 4 team members:

 1. Oguzhan Aksoy
 2. Ahmed Eltwam
 3. Ngoc Bich Uyen Vo
 4. Rattamet Boonwong
 5. Pattapon Tanankakorn
