#include<iostream>
#include<windows.h>

using namespace std;

int main(){

    SetConsoleOutputCP(CP_UTF8);
    int number;

    cout<<"Seleccionar número del 1 al 7" << endl;
    cin>>number;

    switch (number)
    {
    case 1:
    cout<<"Lunes";
        break;
        case 2:
    cout<<"Martes";
        break;
        case 3:
    cout<<"Miércoles";
        break;
        case 4:
    cout<<"Jueves";
        break;
        case 5:
    cout<<"Viernes";
        break;
        case 6:
    cout<<"Sábado";
        break;
        case 7:
    cout<<"Domingo";
        break;
    
    default:
    cout<<"Valor Inválido";
        break;
    }
}