#include <iostream>  // Cargo librer�as (colecciones de funciones ya hechas que hacen cositas): "iostream" me permite sacar texto
#include <cmath>     // y n�meros por el terminal, para que puedas ver el valor de pi, y "cmath" es una colecci�n de funciones
#include <fstream>   // matem�ticas que necesito, como elevar al cuadrado y hacer la raiz cuadrada.

using namespace std;  // A efectos pr�ticos, esto es para no tener que poner "std" todo el rato.

int main(){           // �Comenzamos!
    
    // Imprimimos en el terminal... la bienvenida ;)
    
    cout<<endl<<endl;
    cout<<"                       +-+ - -+-+++++-+- -+-+  +-+--++-++-++-+- ---++-+"<<endl;
    cout<<"                       �-++� �+-���� � � ����  �� +-++-��   � � �+-++�"<<endl;
    cout<<"                       +-+++-+- -+++ - +-+- -  +  -+-- -+-+ - +-+-+-+-+"<<endl;
    cout<<"            ______________________________________________________________________     "<<endl<<endl;
    cout<<"                                          PRESENTA...                                  "<<endl;
    cout<<endl;
    cout<<"                  +-++-+-  +-+- --  +-+  +-++-+  +-+-       +-++-+--+-+-++-+"<<endl;
    cout<<"                  �  +-��  �  � ��  � �   ��+�   �-+�  ---  +-++� +-+�+� +-+"<<endl;
    cout<<"                  +-+- ---++-++-+--++-+  --++-+  -  -       +-++-+-+--+-++-+"<<endl;
    
    cout<<endl<<"                  Sumas infinitas... �Al alcance de tu propio dispositivo!"<<endl<<endl;
    
    cout<<"_____________________________________________________________________________________________"<<endl<<endl;
    cout<<"                                         ADVERTENCIA                                     "<<endl;
    cout<<"Si est� usando este c�digo en un compilador online, puede ser que utilizar un n�mero excesivo"<<endl;
    cout<<" de t�rminos haga que el c�lculo necesite tanto tiempo para ser computado que el compilador lo"<<endl;
    cout<<"               aborte autom�ticamente. En ese caso, pruebe un n�mero menor."<<endl;
    
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    double N = 10000000;         // N�MERO DE T�RMINOS A SUMAR. �CAMBIAD ESTO!
    
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    // Se introduce tal n�mero por terminal:
    
    cout<<endl<<"  +---------------------------------------------------------------------------------------------+";
    cout<<endl<<"  �                      N�mero de t�rminos que quierer sumar : "<<N;
    cout<<endl<<"  +---------------------------------------------------------------------------------------------+";
    
    double S=0;  // Defino la suma total de los t�rminos y la inicializo a 0.

    for (int i=0; i<N; i++) {  // Bucle, recorre todo los naturales hasta N.
        S=S+ 1/pow(i+1,2);     // En cada vuelta se a�ade a S el siguiente t�rmino.
    }
    
    double pi=sqrt(6*S);       // Se calcula pi.
    
    
    cout.precision(18); // Estos son el n�mero de digitos que quiero que se expulsen por pantalla. Puedes aumentarlo si quieres.
    
    // Sacamos los resultados por pantalla para disfrute del usuario:
    
    cout<<endl<<"  +----------------------------------------------------------------------------------------+";
    cout<<endl<<"  �                            "<<"Pi = "<<pi;
    cout<<endl<<"  �";
    cout<<endl<<"  �                "<<"El valor real de pi se encuentra algo m�s arriba";
    cout<<endl<<"  +----------------------------------------------------------------------------------------+"<<endl<<endl;
    
    
    return 0;  // Y hemos terminado. Cerramos el chiringuito.

}

