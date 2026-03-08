//Alejandro Sandoval
//id : 00596210
//Ing. Tecnologias de la informacion

#include <iostream>
using namespace std;

int main() {
    int num1, num2, suma;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    if (num1 % 2 == 0) {
        if (num1 > 0) {
            cout << "Ingrese el segundo número: ";
            cin >> num2;
            
            if (num2 % 2 == 0) {
                if (num2 > 0) {
                    suma = num1 + num2;
                    cout << "La suma es: " << suma << endl;
                } else {
                    cout << "El segundo número no es positivo." << endl;
                }
            } else {
                cout << "El segundo número no es par." << endl;
            }
        } else {
            cout << "El primer número no es positivo." << endl;
        }
    } else {
        cout << "El primer número no es par." << endl;
    }

    return 0;
}
