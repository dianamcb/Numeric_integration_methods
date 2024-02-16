//Programa para determinar mediante la suma de Riemann, con particiones regulares en el intervalo que el usuario indique, para la función y = -((x-7)*(x-7))+19

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
      {
       double fDeX(double x); 
       double x;
       double y;
       y = -((x-7)*(x-7))+19;
       //return y;
    
     
//Se ingresan los límites de integración (a,b) y la cantidad de segmentos bajo la curva (pedazos).
 
    double a;
    double b;
    double delta;
    double sumaDeRiemann = 0;
    double puntoMedio = 0;
    double deltaX = 0;
    double deltaT = 0;
    int segmentos;   

    cout << "\n Por favor ingrese la sig. info. para la función y = -((x-7)*(x-7))+19 : \n";
    cout << "\n Ingrese  el límite inferior" << "\n";
    cout << "a = ";
    cin >> a;
    cout << "\n Ingrese  el límite superior" << "\n";                       
    cout << "b = ";
    cin >> b;
    cout << "\n Ingrese el número de segmentos" << "\n";
    cout << "segmentos = ";
    cin >> segmentos; 
     
    deltaT = b - a;
    printf("segmentos\tSuma de Riemman \n");

   //For recorre el arreglo de pedazos.
   //Inicio de la suma y definición de DeltaX
      
    int j = 0;
    double m;
    double p;
    for (j = 0; j < segmentos; j++)
      {
         sumaDeRiemann = 0;
         deltaX = deltaT/segmentos;
         x = a;
         while(x < b)
         {
            puntoMedio = (x + (x * deltaX))/2.0;
            m = puntoMedio - 7;
	    p = -(m*m)+19;
            sumaDeRiemann = sumaDeRiemann + p*deltaX;
            x = x + deltaX;
         }
         printf("%d\t%.6f\n", segmentos, sumaDeRiemann);
      }
} 

return 0;

}
