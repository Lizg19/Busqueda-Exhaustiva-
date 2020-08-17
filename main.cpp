#include <iostream>

using namespace std;


//BUSQUEDA EXHAUTIVA
// Ecuacion lineal 34= 3x-7

int main()
{
    double paso=0.001;  //condicion de busqueda, en este caso  decima, centesima y milesima
    for (double x=-1000;x<100;x=x+paso){  // se define el rango para realizar la busqueda exhaustiva del valor de x

        if( 34 <=3*(x+paso)-7){  // 34=3x-7 se define la ecuacion con mayor exactitud

            cout << "34 = 3x-7 , de donde x= " << x;
            break;                               // salimos del bucle  para que no se repita la respuesta
        }
    }
    return 0;
}
