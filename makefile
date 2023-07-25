CC := gcc
FLAGS := -g -Wall -Wextra 
SRC_DIR = d_array
SRCS := $(SRC_DIR)/d_array.h
OBJS :=
EXEC_EXT := 

ifeq ($(OS),Windows_NT)
		EXT := .exe
endif

.PHONY := all clean

%(EXEC_EXT): %.c 
		%(CC) %(FLAGS) -o $@ $< 