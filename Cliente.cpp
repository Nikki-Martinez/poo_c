#include "Persona.cpp"
#include <iostream>
using namespace std;
class Cliente : Persona {
        
            private :
            	string nit;
            public :
            	Cliente(){
				}
				Cliente(string nom,string ape,string dir,int tel,string n) 
				: Persona(nom,ape,dir,tel){
					nit = n;
				}
				//sets
				void setNit(string n){
					nit = n;
				}
				void setNombres(string nom){
					nombres = nom;
				}
				void setApellidos(string ape){
					apellidos = ape;
				}
				void setDireccion(string dir){
					direccion = dir;
				}
				void setTelefono(int tel){
					telefono = tel;
				}
				//gets
				string getNit(){
					return nit;
				}
				string getNombres(){
					return nombres;
				}
				string getApellidos(){
					return apellidos;
				}
				string getDirecion(){
					return direccion;
				}
				int getTelefono(){
					return telefono;
				}
				void mostrar(){
					cout<<"_____________________________"<<endl;
					cout<<"Nit: " <<nit<<endl;
					cout<<"Nombres: "<<nombres<<endl;
					cout<<"Apellidos: "<<apellidos<<endl;
					cout<<"Direccion: "<<direccion<<endl;
					cout<<"Telefono: "<<telefono<<endl;
			
				}
	
};
