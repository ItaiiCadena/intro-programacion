/*
Programa que muestra en pantalla la siguiente sucesion de numeros
en un arreglo.
1
2
3
4
...
100
*/

#include <iostream>
using namespace std;
int main(){
	int numero[100]; //Creacion del arreglo
	
	for(int i=0; i<100;i++)
	{
		numero[i]=i+1; //Asignacion de elementos al arreglo
	}
	
	for(int i=0;i<100;i++)
	{
		cout << numero[i] << " "; //Mostrar en pantalla
	}
	
	return 0;
}