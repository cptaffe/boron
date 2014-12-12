
CFLAGS+= -g -DDEBUG -Ilex

SRC = boron.c
OBJ = $(SRC:.c=.o)
HDR =
LIB = lex/lex.a

BIN = boron

all: $(BIN)

$(BIN): $(OBJ) $(LIB)
	$(CC) $(CFLAGS) -o $(BIN) $(OBJ) $(LIB)

$(OBJ): $(HDR)

$(LIB):
	$(MAKE) -C $(dir $(LIB))

clean:
	rm $(BIN) $(OBJ)
	$(MAKE) clean -C $(dir $(LIB))
