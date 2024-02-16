//Programa para determinar mediante el método de Newton-Raphson, un valor cercano a la raíz buscada

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{

//Se define una función

    cout << "n Ingrese una función lineal << n;
    cout << "F: ";
 
//Se ingresa una Xi
 
    cout << "^\n Ingrese una Xi  << ^\n;
    cout << "Xi: ";

//Escribir la derivada de la función

    cout << "^\n Ingrese la derivada de la función, F  << ^\n;
    cout << "F': ";

//Se efectúan las operaciones

    double L;
    L = F;
    double P;
    P = F';
    double M;
    M = L/P;
    double f;
    f = Xi - M;

//Imprimir en pantalla el resultado

    double Xn;
    std::cout << "n El valor aproximado, Xi+n, que satisface a la ecuación propuesta es:  n";
    std::cout << Xn;

//Guardar el último resultado

    ifstream filein(Xn);
    filein >> Xi;

//Considerar el umbral. 

    double delta;
    delta = Xn - Xi;
    cout << 
    cin >> delta;
    while(delta > 10^8)
    {
     cout << "Ingrese una nueva Xi" << 'n';
     cin >> Xi;     
    }
    system("PAUSE");
    return 0;
}
