
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
	int tam;
	struct alumno {
		char nombre[30];
		int numero_control;
		int edad;
		char carrera[30];
	}alumno[3];
	
int main(){
	
	for(int i=0; i<3; i++){
		cout<<"\n\nRellenando los datos del alumno " << i + 1 <<endl;
		cout<<"\nIngrese el nombre del alumno"<<endl;
		cin.getline(alumno[i].nombre, 30 ,'\n');
		

		cout<<"\nIngrese su numero de control"<<endl;
		cin>>alumno[i].numero_control;
		
		cout<<"\nIngrese su edad"<< endl;
		cin>>alumno[i].edad;
		fflush (stdin);
		
		cout<<"\nIngrese la carrera que estudia"<<endl;
		cin.getline(alumno[i].carrera,30,'\n');
	

	}
	
	for (int j = 0; j<3; j++){
		cout<<"\n\nMostrando los datos del alumno: " << j+1<<"\n\n";
		cout<<"\nNombre completo del alumno: "<<alumno[j].nombre<<"\n";
		cout<<"Numero de control: "<<alumno[j].numero_control<<"\n";
		cout<<"Edad: "<<alumno[j].edad<<"\n";
		cout<<"Carrera: "<<alumno[j].carrera<<"\n";		
	}
}
