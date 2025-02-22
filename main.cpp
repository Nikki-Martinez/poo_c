#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"Ingrese nit:";
	cin>>nit;
	cout<<"Ingrese nombres:";
	cin>>nombres;
	cout<<"Ingrese apellidos:";
	cin>>apellidos;
	cout<<"Ingrese Direccion:";
	cin>>direccion;
	cout<<"Ingrese Telefono:";
	cin>>telefono;
	
	
	Cliente obj = Cliente (nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	cout<<"Ingrese el nit a modificar:";
	cin>>nit;
	obj.setNit(nit);
	cout<<"Datos del cliente: "<<obj.getNit()<<","<<obj.getNombres()<<","<<obj.getApellidos()<<","<<obj.getDirecion()<<","<<obj.getTelefono()<<endl;
}
