#include <iostream>
#include "../include/poligono.h"

int main(){

    Retangulo r(5, 5);
    Triangulo t(5, 5);
    r.printArea(); // 25
    t.printArea(); // 12.5
    
    return 0;
}