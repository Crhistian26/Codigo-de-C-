#include <iostream>
#include <sstream>
using namespace std;
//Jhan Crhistian Terrero Ramirez 2024-2586

int main()
{
    int numero1 = 5;
    int numero2 = 15;

    int suma = numero1 + numero2;

    cout<<"Resultado de la suma: "<< suma<<endl;

    const double pi = 3.14159; 
    double radio = 2.5;
    double area = pi * radio * radio;

    cout<<"Resultado del area: "<<area<<endl;
    cout<<endl;

    string nombre;
    int edad;
    cout<<"Ingresame tu nombre porfavor"<<endl;
    getline(cin,nombre);
    cout<<endl<<"Ingresame tu edad porfavor"<<endl;
    cin>>edad;
    
    cout<<endl<<endl<<"Un placer "<<nombre<<" tu edad es de "<<edad<<" años.";

}