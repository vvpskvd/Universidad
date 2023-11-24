#include <iostream>
#include <string>

int square_digits(int num) {
    if (num == 0) {
        return 0;
    }
    std::string resultado = "";
    while (num > 0) {
        int digito = num % 10;
        num /= 10;
        int cuadrado = digito * digito;
        resultado = std::to_string(cuadrado) + resultado;
    }
    return std::stoi(resultado);
}

int main() {
    int main;
    std::cout << "Introduce un número: ";
    std::cin >> num;
    int resultado = square_digits(num);
    std::cout << "El resultado es: " << resultado << std::endl;
    return 0;
}
