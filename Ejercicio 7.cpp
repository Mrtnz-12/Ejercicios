#include <iostream>
using namespace std;

int main(){
	double calificacion;
	cout << "Ingrese la calificaci�n: ";
	cin >> calificacion;
	
	if(calificacion >= 90 ) // 90 o m�s recibe una "A"
	cout << "A";
	else if ( calificacion >= 80) // 80 a 89 recibe una "B"
	cout << "B";
	else if ( calificacion >= 70) // 70 a 79 recibe una "C"
	cout << "C";
	else if ( calificacion >= 60) // 60 a 69 recibe una "D"
	cout << "D";
	else // menos de 60 recibe una "F"
	cout << "F";
}
