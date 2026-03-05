#include <iostream>
using namespace std;
int main() {
   int Num_Hojas;

   cout << "Numero de hojas del cuaderno: ";
   cin >> Num_Hojas;

   if (Num_Hojas == 250) {
	   cout << "El cuaderno cuesta $16,000.";
   }
   else if (Num_Hojas == 100) {
	   cout << "El cuaderno cuesta 11,000";
   }
   else if (Num_Hojas == 80) {
	   cout << "El cuaderno cuesta 8,000";
   }
   else if (Num_Hojas == 50) {
	   cout << "El cuaderno cuesta 4,500";
   }
   else {
	   cout << "Numero de hojas incorrecto";
	   cout << endl;

   }



















}