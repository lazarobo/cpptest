CXX = g++
CXXFLAGS = -I./include
SRC = src/poligono.cpp src/main.cpp
OUT = bin/main

build: $(SRC) include/poligono.h
	$(CXX) -o $(OUT) $(SRC) $(CXXFLAGS)

run: build
	./$(OUT)

clean:
	rm -f $(OUT)
