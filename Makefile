TARGET = exposure
CC = g++
LIBS = gtk+-3.0 libexif
CFLAGS += -g `pkg-config --cflags ${LIBS}` -I./lib/
LDFLAGS += `pkg-config --libs ${LIBS}`


SOURCES+=$(shell find src/ -iname '*.cpp')
OBJECTS+=$(SOURCES:.cpp=.o)


all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS) $(LDFLAGS)

%.o: %.cpp
	$(CC) $< -o $@ -c $(CFLAGS)

clean:
	rm src/*.o
