/*
Programa que cambia la estructura de repeticion "for" por "while" y "do-while"
del siguiente codigo
	int numero[100];
	for(int i=0; i<100;i++){
		numero[i]=i+1; 
	}
	for(int i=0;i<100;i++){
		cout << numero[i] << " "; 
	}
*/

#include <iostream>
using namespace std;
int main(){
	int numero[100], i=0; //Creacion del arreglo
	
	while(i<100)
	{
		numero[i]=i+1; //Asignacion de elementos al arreglo
		i++;
	}
	
	i=0; //Inicializamos nuevamente i para comenzar en la posicion 0 del arreglo
	do
	{
		cout << numero[i] << " "; //Impresion en pantalla
		i++;
	}
	while(i<100);
	return 0;
}