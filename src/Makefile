CC=g++
CFLAGS=-fPIC
LDFLAGS=-shared
FLAGL=-lpthread
PATHL=../bin/
PATHINC=./include
NAMEL=librlnet.so
SOURCES=backpropagation.cpp functions.cpp layer.cpp neuralnetwork.cpp neuron.cpp optimizer.cpp RLnet.cpp edge.cpp
OBJECTS=$(SOURCES:.cpp=.o)

all: $(NAMEL)
	
$(NAMEL): $(OBJECTS)
	mkdir -p $(PATHL)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $(PATHL)$(NAMEL) $(FLAGL)

.SUFFIXES:
.SUFFIXES: .cpp .o

.cpp.o:
	$(CC) $(CFLAGS) $< -c

$(SRCS): $(HEADERS)
	@touch $@

clean:
	rm $(OBJECTS)
	rm -r $(PATHL)