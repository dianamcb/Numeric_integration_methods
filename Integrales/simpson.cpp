//Programa para determinar mediante el método de Simpson, con particiones regulares en el intervalo que el usuario indique, para la función y = (exp-(6.793x*x))/(1.000001-(x*x))

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
 {
       double fx(double x,f);
       double x;
       double f;
       f = exp-(6.793(x*x))/(1.000001-(x*x));

//Definimos las variables
double n;
double a;
double b;
double rest;
double h;
//double suma;
//double x;

  cout << "\n Por favor ingrese la sig. info. para la función:  \n";
    cout << "\n Ingrese  el límite inferior" << "\n";
    cout << "a = ";
    cin >> a;
    cout << "\n Ingrese  el límite superior" << "\n";
    cout << "b = ";
    cin >> b;
    cout << "\n Ingrese el número de segmentos" << "\n";
    cout << "n = ";
    cin >> n;

//Definimos la funcion
// n: numero de x
//@ a y b los intervalos de la integral
//@ f: La funcion a integrar

//#def simpson13(n, a, b, f);
    //calculamos h
    h = (b - a) / n;
    //Inicializamos nuestra varible donde se almacenara las sumas
    double suma = 0.0;
    //hacemos un ciclo para ir sumando las areas
    int i = 0;
	for (i=0; i<n; i++)
	{	
        //calculamos la x
        x = a - h + (2 * h * i);
        x = a + i * h;
	}
        // si es par se multiplica por 4
        if(i % 2 == 0)
            suma = suma + 2 * fx(x,f);
        //en caso contrario se multiplica por 2
        else
            suma = suma + 4 * fx(x,f);
    //sumamos los el primer elemento y el ultimo
    suma = suma + fx(a,f) + fx(b,f);
    //Multiplicamos por h/3
    rest = suma * (h / 3);
 printf("n\ta\tb\tf\n");

 }
    //Retornamos el resultado
        return 0;
}
//Funcion que nos ayuda a evaluar las funciones
//def fx(x, f);
    //return eval(f)

//print(simpson13(n, a, b, f));
