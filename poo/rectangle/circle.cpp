#include "circle.h"

int Circle::m_pi = 3;

Circle::Circle(){
    m_raio = 0;
}

Circle::Circle(int raio){
    m_raio = raio;
}

int Circle::areaCircle(){
    return m_pi * (m_raio * m_raio);
}

void Circle::setRaio(int r){
    m_raio = r;
}

int Circle::getRaio(){
    return m_raio;
}
