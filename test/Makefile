CC=g++
SRC=../src
BIN=../bin/
LIBONT=librlnet.so
CFLAGS=-fPIC -Wall
PATHINCLUDE=./
LDFLAGS=-L./$(PATHINCLUDE) -lrlnet -Wl,-rpath,$(PATHINCLUDE)
SOURCES=main.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main

all: $(EXECUTABLE) 
	
$(EXECUTABLE): $(BIN)$(LIBONT) $(OBJECTS) 
	$(CC) $(OBJECTS) -o $(EXECUTABLE) $(LDFLAGS)

.SUFFIXES:
.SUFFIXES: .cpp .o

.cpp.o:
	$(CC) $(CFLAGS) $< -c

$(BIN)$(LIBONT): 
	make -C $(SRC) -r
	mkdir -p $(PATHINCLUDE)
	cp -r $(BIN)* $(PATHINCLUDE)

clean:
	rm $(OBJECTS) $(EXECUTABLE) $(LIBONT)
	make -C $(SRC) clean
