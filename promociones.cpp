#include <iostream>
using namespace std;

int main() {
    int num;
    float val_compra, total_pag;

    cout << "Digite número obtenido: ";
    cin >> num;

    cout << "Digite valor de la compra: $";
    cin >> val_compra;

    switch(num){
        case 0:
        case 1: total_pag = val_compra * 0.95; break;
        case 2:
        case 3: total_pag = val_compra * 0.87; break;
        case 4:
        case 5: total_pag = val_compra * 0.78; break;
        case 6:
        case 7: total_pag = val_compra * 0.7; break;
        case 8:
        case 9: total_pag = val_compra * 0.5; break;
        default:
            cout << "Error. Número no existe." << endl;
            total_pag = val_compra;
    }

    cout << "Valor total a pagar: $" << total_pag;
    return 0;
}