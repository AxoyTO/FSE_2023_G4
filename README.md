# FSE_2023_G4
# Decimal Converter

Hi! We are group 4 students in **Foundations of Software Engineering class** and this is our final project. **"Decimal Converter"** is a versatile and educational application that allows users to effortlessly convert numbers between decimal, hexa, binary, and Roman numerals. This project empowers users to explore different numerical systems while providing a practical tool for everyday use. 


## Table of Contents 

 - [Keys Features](#keys-features)
 - [Quickstart](#quickstart)
 - [Build the program](#build-the-program)
 -  [Test the program](#test-the-program)
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
     apt-get update
     apt-get install -y build-essential
	 apt-get install git
    ```
 2. Clone the repository
     ``` bash 
      git clone https://github.com/AxoyTO/FSE_2023_G4.git 
    ```
     
 4. [Build the program](#build-the-program)
 5. [Test the program](#test-the-program)

## Build the program

 1. Run `cmake CMakeLists.txt` to make  a set of directives describing the project's source files and targets.
     ``` bash 
      cmake CMakeLists.txt 
    ```
   
 2. Run `make -f Makefile`
    ``` bash 
      make -f Makefile 
    ```
   
## Test the program
Run this command in your Ubuntu to test the program.

  ``` bash 
   python3 test/test.py
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
