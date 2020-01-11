INCLUDE_DIR = ./hdr
CC = gcc
CFLAGS = -I$(INCLUDE_DIR) -g -Wall -c
OBJ_DIR = obj
SRC_DIR = src
OUTPUT = app

FILES = $(foreach file,$(SRC_DIR),$(wildcard $(file)/*.c))
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(FILES))

$(OUTPUT) : $(OBJ)
	$(CC) -o $(OUTPUT) $^ 

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<

clean :
	rm -f $(OBJ_DIR)/*.o ./$(OUTPUT)
