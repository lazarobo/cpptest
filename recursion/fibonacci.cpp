#include <iostream>

int fibonacci(int n){

    if (n == 0 || n == 1)
    {
      return n;
    } else
    {
      return fibonacci(n-1) + fibonacci(n-2);
    }
    return 0;
}

int main() {
  int n = 5;
  int resultado = fibonacci(n);
  std::cout << "Fibonacci de " << n << " é " << resultado << std::endl;
  return 0;
}
