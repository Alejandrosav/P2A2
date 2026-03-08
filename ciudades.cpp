#include <iostream>
using namespace std;

int main() {
    int indicativo, num_min, tarifa, val;
    string ciudad;

    cout << "Digite el indicativo: ";
    cin >> indicativo;

    cout << "Digite # de minutos: ";
    cin >> num_min;

    switch(indicativo){
        case 1: ciudad="Bogota"; tarifa=50; break;
        case 2: ciudad="Cali"; tarifa=70; break;
        case 4: ciudad="Medellin"; tarifa=100; break;
        case 5: ciudad="Barranquilla"; tarifa=160; break;
        case 6: ciudad="Pereira"; tarifa=180; break;
        case 7: ciudad="Cucuta"; tarifa=190; break;
        default:
            cout << "Indicativo no existe." << endl;
            ciudad="Ninguna"; tarifa=0;
    }

    val = num_min * tarifa;

    cout << "Ciudad a la que marca: " << ciudad << endl;
    cout << "Tarifa: $" << tarifa << endl;
    cout << "Valor llamada: $" << val;

    return 0;
}