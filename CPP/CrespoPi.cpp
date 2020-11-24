#include <iostream>  // Cargo librerías (colecciones de funciones ya hechas que hacen cositas): "iostream" me permite sacar texto
#include <cmath>     // y números por el terminal, para que puedas ver el valor de pi, y "cmath" es una colección de funciones
#include <fstream>   // matemáticas que necesito, como elevar al cuadrado y hacer la raiz cuadrada.

using namespace std;  // A efectos práticos, esto es para no tener que poner "std" todo el rato.

int main(){           // ¡Comenzamos!
    
    // Imprimimos en el terminal... la bienvenida ;)
    
    cout<<endl<<endl;
    cout<<"                       +-+ - -+-+++++-+- -+-+  +-+--++-++-++-+- ---++-+"<<endl;
    cout<<"                       ¦-++¦ ¦+-¦¦¦¦ ¦ ¦ ¦¦¦¦  ¦¦ +-++-¦¦   ¦ ¦ ¦+-++¦"<<endl;
    cout<<"                       +-+++-+- -+++ - +-+- -  +  -+-- -+-+ - +-+-+-+-+"<<endl;
    cout<<"            ______________________________________________________________________     "<<endl<<endl;
    cout<<"                                          PRESENTA...                                  "<<endl;
    cout<<endl;
    cout<<"                  +-++-+-  +-+- --  +-+  +-++-+  +-+-       +-++-+--+-+-++-+"<<endl;
    cout<<"                  ¦  +-¦¦  ¦  ¦ ¦¦  ¦ ¦   ¦¦+¦   ¦-+¦  ---  +-++¦ +-+¦+¦ +-+"<<endl;
    cout<<"                  +-+- ---++-++-+--++-+  --++-+  -  -       +-++-+-+--+-++-+"<<endl;
    
    cout<<endl<<"                  Sumas infinitas... ¡Al alcance de tu propio dispositivo!"<<endl<<endl;
    
    cout<<"_____________________________________________________________________________________________"<<endl<<endl;
    cout<<"                                         ADVERTENCIA                                     "<<endl;
    cout<<"Si está usando este código en un compilador online, puede ser que utilizar un número excesivo"<<endl;
    cout<<" de términos haga que el cálculo necesite tanto tiempo para ser computado que el compilador lo"<<endl;
    cout<<"               aborte automáticamente. En ese caso, pruebe un número menor."<<endl;
    
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    double N = 10000000;         // NÚMERO DE TÉRMINOS A SUMAR. ¡CAMBIAD ESTO!
    
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    // Se introduce tal número por terminal:
    
    cout<<endl<<"  +---------------------------------------------------------------------------------------------+";
    cout<<endl<<"  ¦                      Número de términos que quierer sumar : "<<N;
    cout<<endl<<"  +---------------------------------------------------------------------------------------------+";
    
    double S=0;  // Defino la suma total de los términos y la inicializo a 0.

    for (int i=0; i<N; i++) {  // Bucle, recorre todo los naturales hasta N.
        S=S+ 1/pow(i+1,2);     // En cada vuelta se añade a S el siguiente término.
    }
    
    double pi=sqrt(6*S);       // Se calcula pi.
    
    
    cout.precision(18); // Estos son el número de digitos que quiero que se expulsen por pantalla. Puedes aumentarlo si quieres.
    
    // Sacamos los resultados por pantalla para disfrute del usuario:
    
    cout<<endl<<"  +----------------------------------------------------------------------------------------+";
    cout<<endl<<"  ¦                            "<<"Pi = "<<pi;
    cout<<endl<<"  ¦";
    cout<<endl<<"  ¦                "<<"El valor real de pi se encuentra algo más arriba";
    cout<<endl<<"  +----------------------------------------------------------------------------------------+"<<endl<<endl;
    
    
    return 0;  // Y hemos terminado. Cerramos el chiringuito.

}

