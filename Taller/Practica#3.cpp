#include <iostream>
#include <sstream>
#include <string>
using namespace std;
//Jhan Crhistian Terrero Ramirez 2024-2586

string revertir_texto(string text)
{
    int cant = text.length();

    char* texto = new char[cant + 1];

    for(int i = 0; i < cant; i++) {
        texto[i] = text[i];
    }

    char* invertido = new char[cant + 1];

    texto[cant] = '\0';

    int cant2 = cant;

    for(int i = 0; i < cant; i++)
    {
        invertido[cant2 - 1] = texto[i];
        cant2--;
    }

    invertido[cant] = '\0';

    string r = "Texto normal " + text + " texto invertido " + invertido;

    return r;
}

string contar_texto(string texto)
{
    int letras = 0;
    int espacios = 0;

    for(int i = 0; i < texto.length(); i++)
    {
        if(texto[i] != ' ')
        {
            letras++;
        }
        else
        {
            espacios++;
        }
    }

    string r = "El texto introducido tiene "+ to_string(letras) + " letras y " + to_string(espacios) + " espacios.";

    return r;
}

int main()
{
    string hola;
    getline(cin,hola);

    cout<<revertir_texto(hola)<<endl;
    cout<<contar_texto(hola);
}