#include <iostream> 
#include <stdio.h> 
#include <math.h>

using namespace std;

int main() {
	
float base, varilla1, varilla2, catetoad1, catetoad2, descat1, descat2, m1, m2, distancia, x; 
/*
Declaramos variables de tipo flotante para almacenar la base del pozo(base), la longitud de las varillas(varilla1 y varilla2), los resultados para hallar el cateto adyacente
formado por las varillas en el fondo del pozo(catetoad1 y catetod2), usamos una variable(descat1 y descat2) para almacenar el valor de la raiz cuadrada producto del despeje de
los catetos adyacentes, además las variables m1 y m2 hacen referencia a la ecuacion de la parabola en donde divimos los catetos adyacente por la base, y en la variable equis(x) 
guardamos el valor de la resta de las dos variables m(m1 y m2)/el cateto adyacente número dos(descat2), decimos pues que la distancia se almacenará en la variable con su propio nombre
(distancia) donde almacenara el valor de m1 multiplicado por el valor de x.
para lo demás usamos un condicional que regula los valores ingresados, donde base debe ser menor a la longitud de ambas varillas, como resultado final imprimimos en pantalla el
resultado para el usuario.
*/ 
	cout << " Longitud primera varilla en m\n";
	cin >> varilla1;
	cout << " Longitud segunda varilla en m\n";
	cin >> varilla2;
	cout << "longitud de la base en m\n";
	cin >> base;
	if (base<varilla1 && base<varilla2){
    catetoad1 = (varilla1*varilla1)-(base*base);
    catetoad2 = (varilla2*varilla2)-(base*base);
    descat1 = sqrt(cateto1);
    descat2 = sqrt(cateto2);
    m1= descat1/base;
    m2 = (-descat2/base);
    x = descat2/(m1-m2); 
    distancia = m1*x;
    cout << "\n" << endl;
    cout << distancia << "m" << endl;
    }else{
		cout <<"La longitud de la primera varilla y la longitud de la segunda varilla deben ser mayores a la base cada longitud";
	} 	
}
