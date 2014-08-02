TARGET = exposure
CC = g++

LIBS = gtkmm-3.0\
	   libexif\
	   jansson\
	   # opencv

CFLAGS += -g `pkg-config --cflags ${LIBS}` -I./lib/ -I./src/
LDFLAGS += `pkg-config --libs ${LIBS}`
LDFLAGS += -lfreeimageplus

# LDFLAGS += -L./lib/OpenCLIPP/ -lOpenCLIPP-C++


SOURCES+=$(shell find src/ -iname '*.cpp')
OBJECTS+=$(SOURCES:.cpp=.o)


all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS) $(LDFLAGS)

%.o: %.cpp
	$(CC) $< -o $@ -c $(CFLAGS)

clean:
	rm src/*.o
	rm src/**/*.o
