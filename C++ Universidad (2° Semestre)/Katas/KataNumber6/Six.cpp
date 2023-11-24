#include <iostream>
#include <vector>
#include <string>

std::string bienvenida(std::vector<std::string> nombre, std::string ciudad, std::string estado) {
    std::string nombre_completo = "";
    for (int i = 0; i < nombre.size(); i++) {
        if (i != 0) nombre_completo += " ";
        nombre_completo += nombre[i];
    }
    return "Hola, " + nombre_completo + "! Bienvenido a " + ciudad + ", " + estado + "!";
}

int main() {
    std::string ciudad, estado;
    std::string palabra;

    std::vector<std::string> nombre;
    std::cout << "Por favor, ingrese su nombre completo (ingrese 'fin' cuando haya terminado): ";
    while (std::cin >> palabra && palabra != "fin") {
        nombre.push_back(palabra);
    }
    std::cout << "Digite su respectiva ciudad con su estado. \n";
    std::cin >> ciudad;
    std::cin >> estado;
    std::cout << bienvenida(nombre, ciudad, estado) << std::endl;
    return 0;
}
