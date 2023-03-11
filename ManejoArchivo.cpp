#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <conio.h>
#include <math.h>

using namespace std;

void tablaMultiplicar(){
    int numero, i, resultado;
    while(i<10){
        cout<<"Tabla de Multiplicar ";
        cout<<"Ingrese un numero"<<endl;
        cin>>numero;

        resultado= i * numero;

        cout<<"Tabla del:"<<numero<<endl;
        cout<< numero <<" * "<< i << resultado;
        i++;

    }


}

void seleccionTabla(){

    for(int i=0;i<10;i++){
       int cinco=i*5;
       cout<< " 5 "<< " * "<< i <<" = "<<cinco<<endl;
    }for (int i=0; i<10;i++){
        int ocho=i*8;
        cout<< " 8 "<< " * "<< i <<" = " <<ocho<<endl;

    }for(int i=0;i<10;i++){
        int nueve=i*9;
        cout<< " 9 "<< " * "<< i <<" = "<<nueve<<endl;

    }

}

void diaDeLaSemana(){
    int opc;
    cout<<"Dias de la semana";
    cout<<"Introduzca un numero del 1 al 7";
    cin>>opc;

    switch(opc){
        case 1:
            cout<<"Hoy es Lunes y es un dia laboral"; break;

        case 2:
            cout<<"Hoy es Martes y es un dia laboral";break;
        case 3:
            cout<<"Hoy es Miercoles y es un dia laboral";break;
        case 4:
            cout<<"Hoy es Jueves y es un dia laboral";break;
        case 5:
            cout<<"Hoy es Viernes y es un dia laboral";break;
        case 6:
            cout<<"Hoy es sabado y no es un dia laboral";break;
        case 7:
            cout<<"Hoy es Domingo y no es un dia laboral";break;

            getch();

    }



}
    string texto;
void leerArchivo(){
    ifstream archivo ;
    string texto;
    archivo.open("C:/user/helac/escritorio/examen.txt", ios:: in);
    if(archivo.is_open()){
        while(getline(archivo,texto)){
            cout<<"0909-21-1802==>"<<texto<<endl;
        }
        archivo.close();

    }

}
void agregarArchivo (){
    ofstream archivo;
    archivo.open("C:/user/helac/escritorio/examen.txt", ios::app;
    if(archivo.is_open()){
        archivo<<texto<<"0909-21-1802";
        archivo.close();
        cout<<"agrego carne";
    }else{
        cout<<"Error al leer el archivo";
    }
}




