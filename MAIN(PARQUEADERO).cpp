#include "PILA.cpp"
#include "string"
#include "iostream"
#include "conio.h"
using namespace std;

PILA<int> s;
PILA<int> aux;

void desapilar(int placa){
    if(s.search(placa)==true){
        int x, y, z, cont=0, cont2=0;
        do{
            z = s.top->getMoves();
            z = z+1;
            x = s.pop();
            aux.push(x,z);
            cont++;
        }while(x!=placa);
        x = aux.top->getMoves();
        cout<<endl<<"\tSe desapilo: "<<aux.pop()<<endl;
        if(x==1){
            cout<<"\tSe movio el carro "<<x<<" vez"<<endl;
        }
        else{
            cout<<"\tSe movio el carro "<<x<<" veces"<<endl;
        }
        while(cont2<cont-1){
            z = aux.top->getMoves();
            z = z+1;
            y = aux.pop();
            s.push(y,z);
            cont2++;
        };
        cont = cont+cont2;
        s.Gmoves(cont);
        cout<<"\tSe hicieron: "<<cont<<" movimientos"<<endl;
    }
    else{
        cout<<"\tEl carro no esta parqueado"<<endl;
    }
}

int main(){
    bool F = true;
    s.push(111,0);
    s.push(121,0);
    s.push(131,0);
    s.push(141,0);
    s.push(151,0);
    while(F){
        system("cls");
        cout<<"\n\t\t[1] Apilar carro\n\t\t[2] Desapilar carro\n\t\t[3] Imprimir pila\n\t\t[4] Buscar carro\n\t\t[5] Ver numero de movimientos\n\t\t[6] Salir del programa"<<endl<<endl<<"\tSeleccion: ";
        int Option; cin>>Option;
        switch (Option)
        {
        case(1):
            system("cls");
            cout<<endl<<"\tIngrese el numero de la placa del carro: ";
            int Placa; cin>>Placa;
            s.push(Placa,0);
            break;
        case(2):
            system("cls");
            if(s.isEmpty()!=true){
                cout<<endl<<"\tIngrese el numero de la placa del carro: ";
                int Placa2; cin>>Placa2;
                desapilar(Placa2);
            }
            else{
                cout<<endl<<"\tEl parqueadero esta vacio"<<endl;
            }
            getch();
            break;
        case(3):
            system("cls");
            if (s.isEmpty()){
                cout<<endl<<"\tEl parqueadero esta vacio"<<endl;
            }
            else{
                s.print();
            }
            getch();
            break;
        case(4):
            system("cls");
            if (s.isEmpty()){
                cout<<endl<<"\tEl parqueadero esta vacio"<<endl;
            }
            else{
                cout<<endl<<"\tIngrese el numero de la placa del carro: ";
                int PlacaS; cin>>PlacaS;
                if(s.search(PlacaS)){
                    cout<<endl<<"\tEl carro esta parqueado"<<endl;
                }
                else{
                    cout<<endl<<"\tEl carro no esta parqueado"<<endl;
                }
            }
            getch();
            break;
        case(5):
            system("cls");
            cout<<endl<<endl<<"\tSe han hecho "<<s.Gmoves(0)<<" movimientos"<<endl;
            getch();
            break;
        case(6):
            system("cls");
            cout<<endl<<"\tSaliendo del programa..."<<endl;
            return 0;
        default:
            system("cls");
            cout<<endl<<endl<<"\tOpcion invalida"<<endl;
            getch();
            break;
        }
    }
}
