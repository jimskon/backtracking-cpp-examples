# Generic Makefile for a folder of standalone C++ programs
# Builds each *.cpp into an executable with the same basename.
#
# Usage:
#   make            # build all
#   make run FILE=permutations
#   make clean
#
# Notes:
# - Requires GNU make and g++ (or clang++ if you change CXX)

CXX      := g++
CXXFLAGS := -std=c++17 -O2 -Wall -Wextra -pedantic

SRCS := $(wildcard *.cpp)
BINS := $(SRCS:.cpp=)

.PHONY: all clean run list

all: $(BINS)

# Pattern rule: build "foo" from "foo.cpp"
%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

run:
	@if [ -z "$(FILE)" ]; then \
		echo "Usage: make run FILE=<program>"; \
		echo "Try
