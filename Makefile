# Variables
CC = g++
ANTLR_LIB = /usr/local/lib
ANTLR_INCLUDE = /usr/local/include/antlr4-runtime
CFLAGS = -I$(ANTLR_INCLUDE) 
LDFLAGS = -L$(ANTLR_LIB) -lantlr4-runtime
SOURCES = main.cpp $(wildcard Newick/*.cpp) $(wildcard NewickTree/*.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

# Targets
all: main

main: $(OBJECTS)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS) main

.PHONY: all clean