#include "rectangle.h"

Retangulo::Retangulo() {
    m_largura = 0;
    m_altura = 0;
}

Retangulo::Retangulo(int largura, int altura) {
    m_largura = largura;
    m_altura = altura;
}

int Retangulo::area() {
    return m_largura * m_altura;
}

int Retangulo::perimetro() {
    return (2 * m_largura + 2 * m_altura);
}

int Retangulo::getLargura() { 
    return m_largura;
}

void Retangulo::setLargura(int l) {
    m_largura = l;
}

int Retangulo::getAltura() { 
    return m_altura;
}

void Retangulo::setAltura(int a) {
    m_altura = a;
}