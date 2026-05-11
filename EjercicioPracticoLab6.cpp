#include<iostream>
#include<windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
int select;
float n1, n2, n3, total;
    cout<<"BIENVENIDO A SISTEMA DE NOTAS"<< endl;
    cout<<"SELECCIONE MATERIA A PROMEDIAR NOTA"<< endl;
    cout<<"1: Matemática"<< endl;
    cout<<"2: Programación"<< endl;
    cout<<"3: Física"<< endl;
    cin>>select;

    switch (select)
    {
    case 1:
    cout << "Matemática seleccionado" << endl;
    cout << "Nota 1: ";
    cin>>n1;
    cout << "Nota 2: ";
    cin>>n2;
    cout << "Nota:3: ";
    cin>>n3;
    
    total = (n1+n2+n3)/3;

    if(total >= 6 && total <= 10){
        cout<<"Usted a aprobado con "<<total;
    }else if(total < 6 && total >= 0){
        cout<<"Usted a reprobado con "<<total;
    }else{
        cout<<"Datos mal ingresados";
    }
        
        break;

        case 2:

        cout << "Programación seleccionado" << endl;
    cout << "Nota 1: ";
    cin>>n1;
    cout << "Nota 2: ";
    cin>>n2;
    cout << "Nota:3: ";
    cin>>n3;
    
    total = (n1+n2+n3)/3;

    if(total >= 6 && total <= 10){
        cout<<"Usted a aprobado con "<<total;
    }else if(total < 6 && total >= 0){
        cout<<"Usted a reprobado con "<<total;
    }else{
        cout<<"Datos mal ingresados";
    }

        break;

        case 3:

        cout << "Física seleccionado" << endl;
    cout << "Nota 1: ";
    cin>>n1;
    cout << "Nota 2: ";
    cin>>n2;
    cout << "Nota:3: ";
    cin>>n3;
    
    total = (n1+n2+n3)/3;

    if(total >= 6 && total <= 10){
        cout<<"Usted a aprobado con "<<total;
    }else if(total < 6 && total >= 0){
        cout<<"Usted a reprobado con "<<total;
    }else{
        cout<<"Datos mal ingresados";
    }

        break;
    
    default:
    cout<<"Valor inválido";
        break;
    }
}