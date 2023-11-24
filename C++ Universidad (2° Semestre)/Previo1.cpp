#include <iostream>
#include <string.h>
#include <math.h>

int square_digits(int cxc) {
  if (cxc==0) {
    return 0;
  }

  std::string resultado = " ";
    while (cxc>0) {
      int digito = cxc % 10;
      cxc = cxc / 10;
      int cuadrado = pow (digito, 2);
        resultado = std::to_string(cuadrado) + resultado;
      }
    return std::stoi(resultado);
  }

int Equals() {
  int cxc;
  std::cout << "Introduce un numero: ";
  std::cin >> cxc;
  int resultado = square_digits(cxc);
  std::cout << "El resultado es: " << resultado << std::endl;

  return 0;
  }
