#include <iostream>
using namespace std;

double BaK(double bytes) {
    return bytes / 1024;
}

double TaM(double terabytes) {
    return terabytes * 1024 * 1024;
}

double GaP(double gigabytes) {
    return gigabytes / (1024 * 1024);
}

int main() {
    double valor;
    char opcion;
    cout << "Introduce el valor a convertir: ";
    cin >> valor;
    cout << "Elige la conversion (1: Byte a Kilobyte, 2: Terabyte a Megabyte, 3: Gigabyte a Petabyte): ";
    cin >> opcion;

    switch (opcion) {
        case '1':
            cout << valor << " Bytes son " << BaK(valor) << " Kilobytes." << endl;
            break;
        case '2':
            cout << valor << " Terabytes son " << TaM(valor) << " Megabytes." << endl;
            break;
        case '3':
            cout << valor << " Gigabytes son " << GaP(valor) << " Petabytes." << endl;
            break;
        default:
            cout << "Opción no válida" << endl;
    }

    return 0;
}

