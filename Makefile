# define variable
CC=gcc
CFLAGS=-g -Wall 
SRC_DIR := src
BUILD_DIR := build
SRC_FILE := $(SRC_DIR)/ex1.c
BUILD_FILE := $(BUILD_DIR)/ex1

all: $(BUILD_FILE)

$(BUILD_FILE): $(SRC_FILE) | $(BUILD_DIR)
	@$(CC) $(CFLAGS) -o $@ $<
	@echo "程序生成成功"
	@./$@
$(BUILD_DIR):
	mkdir -p $@


clean:
	rm -rf $(BUILD_DIR)
