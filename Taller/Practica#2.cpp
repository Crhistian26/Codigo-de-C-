#include <iostream>
#include <sstream>
using namespace std;
//Jhan Crhistian Terrero Ramirez 2024-2586

string comparar_numeros(double num1, double num2)
{
    if(num1 > num2)
    {
        string r = to_string(num1)+" es mayor a "+ to_string(num2);
        return r;
    }
    else if (num1 < num2)
    {
        string r = to_string(num1)+" es menor a "+ to_string(num2);
        return r;
    }
    else if (num1 == num2)
    {
        string r = to_string(num1)+" es igual a "+ to_string(num2);
        return r;
    }
}

string par_o_impar(int numero)
{
    if(numero % 2 == 0)
    {
        string r = "el numero " + to_string(numero) + "es par.";
    }
    else
    {
        string r = "el numero " + to_string(numero) + "es impar.";
    }
}

string confirmar_edad(int numero)
{
    if(numero > 18)
    {
        return "Felicidades amigo eres mayor de edad, pero eso no significa que puedas subirte a un vehiculo, vete a conseguir la licencia.";
    }
    else
    {
        string r = "Mi pana usted necesita unos " + to_string(18 - numero) + " años para montarte a un carro, bueno eso y la licencia.";
        return r;
    }
}

int main()
{
    {
        double num1,num2;
        cout<<"Ingresa un numero:"<<endl;
        cin>>num1;
        cout<<"Ingresa otro numero:"<<endl;
        cin>>num2;

        double suma,resta;
        suma = num1 + num2;
        resta = num1 - num2;

        cout<<"Este es el resultado de la suma: "<<suma<<endl;
        cout<<"Este es el resultado de la resta: "<<resta<<endl;


    }

    {
        double num1,num2;
        cout<<"Ingresa un numero:"<<endl;
        cin>>num1;
        cout<<"Ingresa otro numero:"<<endl;
        cin>>num2;

        double multiplicacion,division;
        multiplicacion = num1 * num2;
        division = num1 / num2;

        cout<<"Este es el resultado de la multiplicacion: "<<multiplicacion<<endl;
        cout<<"Este es el resultado de la division: "<<division<<endl;        
    }

    {
        double num1,num2;
        cout<<"Ingresa el ancho del rectangulo:"<<endl;
        cin>>num1;
        cout<<"Ingresa el alto del rectangulo:"<<endl;
        cin>>num2;

        double area;
        area = num1 * num2;

        cout<<"Esta es el area del triangulo: "<<area<<endl;
        
    }

    {
        double num1,num2;
        cout<<"ingresa el primer numero"<<endl;
        cin>>num1;
        cout<<"ingresa el segundo numero"<<endl;
        cin>>num2;

        cout<<comparar_numeros(num1,num2);
    }

    {
        int numero;
        cout<<"Ingresa un numero para ver si es par o impar:"<<endl;
        cin>>numero;

        cout<<par_o_impar(numero);
    }

    {
        int numero;
        cout<<"Ingresa tu edad para verificar si puedes usar un auto:"<<endl;
        cin>>numero;

        cout<<confirmar_edad(numero);
    }
}