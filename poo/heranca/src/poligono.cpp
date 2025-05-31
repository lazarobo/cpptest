#include <iostream>
#include "../include/poligono.h"

Poligono::Poligono(double a, double b) : _largura(a), _altura(b) {}

Retangulo::Retangulo(double a, double b) : Poligono (a, b){}

Triangulo::Triangulo(double a, double b) : Poligono(a, b){}