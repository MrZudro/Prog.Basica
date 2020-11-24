#include <iostream>
#include <conio.h>

using namespace std;

int divisor(int x){
	int suma = 0;
	for(int k = 1;k <=(x/2);k++){
		if((x%k)==0){
			suma = suma + k;
		}
	}
	return suma;	
}

int main(){
	
	int ri,rj;
	for(int i = 2; i<10000;i++){
		ri= divisor(i);
		for(int j = i;j<10000;j++){
			rj=divisor(j);
			if((ri==j)&&(rj==i)){
				cout<<i<<"\t"<<"\tSon numero amigos"<<endl;
			}
		}
	}
	_getch();
}
