#include <iostream>

int collatz(int n){
    std::cout << n << "==>" << "\n";

    if (n == 1){
        return n;  
    } 
    else{
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = (3 * n) + 1;
        }
        return collatz(n);  
    }  
}

int main(){
    int n = 8;
    int resultado = collatz(n);  
    std::cout << "Collatz de " << n << " é " << resultado;

    return 0;
}
