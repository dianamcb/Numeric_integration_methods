//Programa para determinar mediante el método de Newton-Raphson, un valor cercano a la raíz buscada.

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{

//Se ingresa una Xi y el umbral.
 
    double umbral = 0;
    double Xi;
    double F = 0;
    double Fp = 0;
    double P = 0;
    double Xn = 0;
    double delta = 0;

      cout << "\n Ingrese una X inicial" << "\n";
      cout << "Xi = ";
      cin >> Xi;
      cout << "\n Ingrese el umbral" << "\n";
      cout << "Umbral = ";
      cin >> umbral; 
    do
    {

//Calcular Xn, quien es Xi+1. F, es el numerador, es el denominador, la derivada de la función. P, es el cosciente de la función sobre su derivada    .
      F = cos(Xi)-Xi*Xi*Xi;
      Fp = -sin(Xi) - 3*(Xi*Xi);
      P = F/Fp;
      Xn = Xi - P;

      std::cout << "\n El valor de Xn es: " << "\n";
      std::cout << Xn;

//Se calcula delta, para reconocer la diferencia entre el valor calculado anteriormente y el actual.
    
      delta = abs(Xn - Xi);
      std::cout << "\n El valor de delta es: " << "\n";
      std::cout << delta;

      Xi=Xn;
    }
    while(delta > umbral);

//Si delta es mayor al umbral, se debe repetir el ciclo del cálculo, sino, termina y se imprime el resultado en pantalla.
    
    std::cout << "\n El valor aproximado, Xi+n, que satisface a la ecuación propuesta es: " << "\n" << endl; 
    std::cout << Xn;
    
    return 0;
}
