OBJECTS = player.o
HEADERS = player.h

.PHONY: all
all : BBSim

BBSim: $(OBJECTS)
	g++ main.cpp $(OBJECTS) -o $@

%.o : %.c
	g++ -c $@ -o $<
