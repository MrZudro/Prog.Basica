//Junquillo
#include<iostream>
#include <math.h>
using namespace std;
int main() {
	float d, v1, v2, r, p1, p2;
	cout << "Digite el Diametro del Lago en Metros (esta medida debe ser mayor a 0 y menor a 1000):" << endl;
	cin >> d;
	if (0<d && d<1000) {
		cout << "Digite la Porcion Visible del Junquillo en Centimetros (esta medida debe ser mayor a 0 y menor a 10000):" << endl;
		cin >> v1;
		if (0<v1 && v1<10000) {
			v2 = v1/100;
			r = d/2;
			p1 = (pow(r,2)/(2*v2))-(v2/2);
			p2 = p1*100;
			cout << "La Profundidad del Lago de un Diametro de " << d << "m, con una Porcion Visible del Junquillo de " << v1 << "cm es de " << p1 << "m o " << p2 << "cm." << endl;
		} else {
			cout << "El valor de la Porcion Visible del Junquillo esta por fuera del intervalo que se exige." << endl;
		}
	} else {
		cout << "El valor del Diametro esta por fuera del intervalo que se exige." << endl;
	}
	return 0;
}
