#include <iostream>

template <typename T>
void trocar(T& a, T& b) {
   T temp = a;
   a = b;
   b = temp;
}

template <typename T>
void imprimirArray(T* v, int n) {
   for (int i = 0; i < n; i++)
       std::cout << v[i] << " ";
}

void bubbleSort(int* v, int n) {
   for (int i = 0; i < n - 1; i++)
       for (int j = 0; j < n - i - 1; j++)
           if (v[j] > v[j + 1])
               trocar(v[j], v[j + 1]);
}

int main() {
   const int tamanho = 5;
   int arranjo[tamanho] = {-10, 45, 12, 0, -103};

   bubbleSort(arranjo, tamanho);
   imprimirArray(arranjo, tamanho);
}
