#include <iostream>
#include <cmath>
//Taller 1
//integrantes: Nicolas Ruiz - Paula Ruiz - Matias Zapata
//funcion especifica para calcular raices
void CalcularRaices(double a, double b, double c) {
    double discriminante = b * b - 4 * a * c; // se ocupan las letras a, b y c para sea mas facil asimilar con la ecuacion general
    if (a == 0) {
        std::cerr << "el coeficiente de x^2 debe ser distinto de cero :c" << std::endl; //para el codigo de error ocupamos cerr y no cout
    } else if (discriminante > 0) {
        double primera_raiz = (-b + std::sqrt(discriminante)) / (2 * a);
        double segunda_raiz = (-b - std::sqrt(discriminante)) / (2 * a);
        std::cout << "Las raices reales son: " << primera_raiz << " y " << segunda_raiz << std::endl;
    } else if (discriminante == 0) {
        double raiz = -b / (2 * a);
        std::cout << "La raiz real doble (ambas son iguales) es: " << raiz << std::endl;// cuando son 2 iguales
    } else {
        double real = -b / (2 * a);
        double imaginario = std::sqrt(-discriminante) / (2 * a);
        std::cout << "Las raices complejas son: " << real << " + " << imaginario << "i y " << real << " - " << imaginario << "i" << std::endl;
    }
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "debe ingresar exactamente 3 coeficientes por línea de comandos (a, b, c)." << std::endl;
        return 1;
    }

    double a = std::stod(argv[1]);
    double b = std::stod(argv[2]);
    double c = std::stod(argv[3]);

    CalcularRaices(a, b, c);

    return 0;
}