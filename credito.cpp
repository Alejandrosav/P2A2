#include <iostream>
using namespace std;

int main() {
    int plazo;
    string art;

    cout << "Digite el plazo otorgado: ";
    cin >> plazo;

    switch(plazo) {
        case 48: art = "un computador."; break;
        case 36: art = "un TV de 42 pulgadas."; break;
        case 24: art = "un BlackBerry."; break;
        case 12: art = "una camara digital."; break;
        case 6: art = "una impresora."; break;
        default: art = "";
    }

    if (art == "")
        cout << "Error. Plazo no existe.";
    else
        cout << "Podria llevar " << art;

    return 0;
}