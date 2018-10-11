CXXFLAGS = -Wall -O2 `wx-config --cxxflags`
LDLIBS = `wx-config --libs`
OBJ = \
	  frame.o \
	  menubar.o \

all: minnotes

minnotes: $(OBJ)

clean:
	rm -f *.o
	rm -f minnotes
