//Programa para determinar mediante la suma de Riemann, con particiones regu    lares en el intervalo que el usuario indique, para la función y = (exp-(6.793(x*x)))/(1.000001-(x*x))
                                                                   
 
#include <iostream>
#include <cmath>
 
using namespace std;

int main ()
{
      {
       double x;

//Se ingresan los límites de integración (a,b) y la cantidad de segmentos ba    jo la curva (pedazos).
    
    double a;
    double b;
    double sumaDeRiemann = 0;
    double puntoMedio = 0;
    double deltaX = 0;
    double deltaT = 0;
    double segmentos;   
 
    cout << "\n Por favor ingrese la sig. info. para la función y = -((x-7)*    (x-7))+19 : \n";
    cout << "\n Ingrese  el límite inferior" << "\n";
    cout << "a = ";
    cin >> a;
    cout << "\n Ingrese  el límite superior" << "\n";                       
    cout << "b = ";
    cin >> b;
    cout << "\n Ingrese el número de segmentos" << "\n";
    cout << "segmentos = ";
    cin >> segmentos; 
      
    deltaT = b - a;  //Diferncia entre lim. sup. y lim. inf. para obtener de    ltaX
     printf("segmentos\tSuma de Riemman \n");
  
     //For recorre el arreglo de pedazos.
     //Inicio de la suma y definición de DeltaX
       
     int j = 0;
     double m;
     double p;
     
     deltaX = abs(deltaT/segmentos);  //se divide segmento en n subinter    valos de igual longitud
     sumaDeRiemann = 0;
     x = a;
     while(x < b)
     {
       m = exp-(6.793(x*x));
       p = m/(1.000001-(x*x));       
       //m = x - 7;
       //p = -1 * (m*m) + 19;
       sumaDeRiemann = sumaDeRiemann + p*deltaX;
       x = x + deltaX;
     }
          printf("\t%.6f\n", sumaDeRiemann);
      } 
 
return 0;
 
 }          
