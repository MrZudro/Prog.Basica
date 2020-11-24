#include <iostream>

using namespace std;

int main(){
	
	int N, i;
	
	cout<<"Digite el tamaño de posiciones que quiere para su arreglo: ";
	cin>>N;
	int A[N];
	for (i=0;i<N;i++){
		cout<<"Ingrese los datos a su arreglo: ";
		cin>>A[i];
	}
	for (i=0;i<N;i++){
		cout<<"Los datos de su arreglo en la posicion "<<i<<" es: ";
		cout<<A[i]<<endl;
	}
}
