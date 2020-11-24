//N�meros amigos dados por un intervalo de tipo (a,b)

#include <iostream>//Nuestras librer�as
using namespace std;

int divisor(int a);//Prototipo de la funci�n.


int main() {
    int n, m, a, b,i,j; // declaramos las variables temporales usadas en la funcion principal(main)
    bool hay;
    cout<<"Introduce un intervalo dando dos numeros (n m): "<<endl;//Mostramos en pantalla la instrucci�n para el usuario
    cout<<"---------------------------------------------------"<<endl;
    cout<<"Valor inicio"<<endl;
    cin>>n;//Ingresamos n, como numero que marca el inicio del intervalo
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"Valor final"<<endl;
	cin>>m;//Ingresamos m, como numero que marca el fin del intervalo
	cout<<"-----------------------------------------------------"<<endl;
    for(i=n;i <= m; i++){ //1). Un ciclo de tipo para donde contador1(i) tiene por valor n, que ir� hasta que sea menor o igual a m aumentando de uno en uno
        for(j=i+1; j<=m ; j++){//2). Otro ciclo donde para contador2(j) tiene el valor de contador 1(i) mas uno, que ir� hasta que sea menor o igual a m de uno en uno
            if((divisor(i) == j) && (divisor(j)==i)) {/*3).Condicional que envia a la funcion divisor el valor del contador1(i) y regresa con valor suma y compara con contador2(j) 
			luego utliza el comparador l�gico && (and o Y en pseudocodigo)con la expresion que de nuevo envia a la funcion divisor el valor del contador2 y regresa con valor suma y lo
			compara con el contador1(i). si ambas sentencias son verdaderas, ejecuta el codigo de dentro:*/     
                 cout <<"El numero "<<i<<" es amigo del numero "<<j<<endl;//Muestra en pantalla los numeros que son amigos entre si.
                 cout<<"-----------------------------------------------------"<<endl;
                 hay = true;//ejemplo de variable booleana (falso o verdadero)
             }
        }
    }
    if (hay == false){
    	cout<<"No hay numeros amigos en este intervalo ";//Si no hay numeros amigos, dir� esto.
	}
}

int divisor(int a){// 4).A la funcion le debe llegar un valor entero(int) que ser� guardado en la variable a.
    int suma=0;//Declaramos una variable llamada suma que tendra un valor de cero
    for(int i = 1;i<a;i++){//5).creamos un ciclo con contador(i) que tendra por valor 1, que se ejcutara hasta que el contador(i) sea menor que a, aumentando de uno en uno
        if (a % i == 0) suma += i;/*6).Condiconal que pregunta si el modulo de a y el contador(i) es igual a 0, entonces sumar� el valor de suma y del contador(i) y lo guardar�
        en la variable suma, en caso de ser falso no har� nada*/
    }
    return suma;//retorna suma a divisor y lleva el valor de nuevo a la funci�n principal
}
/*
1). Este ciclo que tiene i por contador, tiene la msi�n o funcion de recorrer todos los numeros desde n hasta que sea menor a m
2.). Este cilo al igaul que el anterior prentende recorrer todos los numeros m�s uno, por que no podemos comparar el mismo numero con el mismo numero.
3). Este condicional compara el valor traido de la funci�n y lo compara con los contadores para que, s� son iguales sus sumas, diga que son numeros amigos.
4). recuerden que nuestros contadores son el entero que le enviamos a la funci�n "divisor(aqui va el valor que le enviamos osea i o j)"
5). cabe resaltar que aqui usamos otro contador que se llama i, pero no es el mismo de arriba en la funcion main, son distintos pues son variable dedicadas a cada funci�n. Este
contador tiene por funci�n empezar en uno(1) hasta que sea menor que a(que es nuestro otro contador que enviamos) aumentando de uno en uno.
6). Este condiconal pregunta si el modulo(residuo de la divisi�n) entre a(que es nuestro otro contador que enviamos) y el contador de nuestro actual ciclo(i) es igual a 0 entonces 
sume y asigne a la variable suma el valor de suma mas el contador: <<<suma=suma+i>>> que tambi�n se puede escribir como <<<suma +=i>>> les dejo un peque�o codigo para que lo
prueben y verifiquen y entiendan lo que les digo:

#include <iostream>

using namespace std;

int main(){

	int a=15;
	int b = 10;
	cout<<a<<endl;
	a+=b;	
	cout<<a;
}

*/

