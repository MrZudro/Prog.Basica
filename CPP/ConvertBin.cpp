#include <iostream>

void mostrar(int a); 
void sumaBin();


using namespace std;

int Abin[8];
int Bbin[8];
int Cbin[8];
int auxBin[8];
int MoB;

int main(){
	
	int A,B,C;
	cout<<"Ingrese el primer operando: ";
	cin>>A;
	cout<<"Ingrese el segundo operando: ";
	cin>>B;
	C=A+B;
	cout<<"el valor de la suma de A y B(en decimal) es: "<<C;
	
	//Convertir A en binario.
	MoB=1;
	cout<<endl<<"Numero A en binario: "<<endl;
	for(int i=0;i<=8;i++){
		Abin[i]=A % 2;
		A /= 2;
	}
	mostrar(MoB);
	
	//Convertir B a binario.
	cout<<endl<<"Numero B en binario: "<<endl;
	MoB=2;
	for(int i2=0;i2<=8;i2++){
		Bbin[i2]=B % 2;
		B /= 2;
	}
	mostrar(MoB);
	
	cout<<endl<<"Suma en binario(C): "<<endl;
	sumaBin();
	
	
}

void mostrar(int a){
	if(a==1){
		for(int i=7;i>=0;i--){
		cout<<Abin[i]<<"   ";	
		}
	}else{
		if(a==2){
			for(int i=7;i>=0;i--){
			cout<<Bbin[i]<<"   ";
			}	
		}else{
			for(int i=7;i>=0;i--){
			cout<<Cbin[i]<<"   ";
			}	
		}
		
	}

}

void sumaBin(){
	int i, j, k, aux;
	for(i=7;i>=0;i--){
		for(j=7;j>=0;j--){
			for(k=7;k>=0;k--){
				if((Abin[i]+Bbin[j])==2){
					Cbin[k]=0;
					aux=1;
				}else{
					Cbin[k]=Abin[i]+Bbin[j];
				}
				if(aux==1){
					Abin[i+1]=aux+Abin[i+1];
					aux=0;
					if(Abin[i+1]==2){
						Abin[i+1]=0;
						aux=1;
					}
				}
			}
		}
	}
	MoB=3;
	mostrar(MoB);
	
}

