SHELL = /bin/bash
SRC = src/main.cpp src/converter.cpp
BINFOLDER = bin
BIN = $(BINFOLDER)/main
CXXFLAGS = -o $(BIN) -std=c++11 -w
CXX = g++
DATE = $(shell date +%d/%m/%y)

.PHONY: all compile run test clean

all: clean compile

compile:
	@echo " *  Compiling"
	@mkdir $(BINFOLDER)
	$(CXX) $(SRC) $(CXXFLAGS)
	@echo " *  Created on: $(DATE)"
	@echo " *  Author: FSE Team#4"

run:
	./$(BIN)

test:
	python3 test/test.py

clean:
	rm -rf $(BINFOLDER)