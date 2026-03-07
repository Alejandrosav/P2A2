#include <iostream>
using namespace std;
int main() {

	int Num1, Num2, Num3, Num3, Num4, may;
	
	cout << "Digite numero 1:";
	cin >> Num1;
	cout << "Digite numero 2:";
	cin >> Num2;
	cout << "Digite numero 3:";
	cin >> Num3;
	cout << "Digite numero 4:";
	cin >> Num4;

	if (Num1 > Num2 && Num2 >> Num3 && Num2 > Num4) {
		may = Num1;
	} else {
		if (Num2 > Num1 && Num2 > Num3 && Num2 > Num4) {
			may = Num2;
		}
		else {
			if (Num3 > Num1 && Num3 > Num2 && Num3 > Num4) {
				may = Num3;
			}
			else {
				may = Num4;
			}
		}
	}

	cout << "El número mayor es el: " << may << endl;

	return 0;
}

