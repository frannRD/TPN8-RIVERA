#include <iostream>
#include<string>
using namespace std;

double sumar(double a, double b) {
    return a + b;
}

double restar(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        cout << "division por ceo" << endl;
        return 0;
    }
}

int main() {
    double num1, num2;
    int operacion;
    cout << "Introduce dos numeros: ";
    cin >> num1 >> num2;
    cout << "Introduce la operacion (1=sumar, 2=restar, 3=multiplicar, 4=dividir): ";
    cin >> operacion;

    switch (operacion) {
        case 1:
            cout << "Resultado: " << sumar(num1, num2) << endl;
            break;
        case 2:
            cout << "Resultado: " << restar(num1, num2) << endl;
            break;
        case 3:
            cout << "Resultado: " << multiplicar(num1, num2) << endl;
            break;
        case 4:
            cout << "Resultado: " << dividir(num1, num2) << endl;
            break;
        default:
            cout << "Operacion no valida" << endl;
    }

    return 0;
}

