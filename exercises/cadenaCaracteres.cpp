/*
Programa que realiza las siguientes acciones:
a)leer una cadena de caracteres terminada en punto ('.'), caracter por caracter
b)Contar en numero de vocales existentes en el arreglo e imprimir el numero total
de caracteres. Se debe utilizar un arreglo de N elementos de tipo char.

Ejemplo:
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17
D I V I D E   Y   V  E  N  C  E  R  A  S  .

Salida:
Numero de caracteres:  18
Numero de As: 1
Numero de Es: 3
Numero de Is: 2
Numero de Os: 0
Numero de Us: 0
*/
#include <iostream>
using namespace std;
int main(){
	char cadena[100], c; //Creacion de arreglo, c servira para ir almacenando caracter por caracter en el arreglo
	int k=0; //Para while
	int a,e,i,o,u; //Acumuladores para contar numero de vocales en la cadena
	
	
	//Codigo para pedir al usuario la oracion o cadena de caracteres
	cout << "Ingrese una cadena de caracteres, termine en '.'" << endl;
	cin.get(c); // "c" lee un solo caracter de la cadena 
	while(k<100 && c != '.') //While para movernos en el arreglo
	{
		cadena[k] = c; //Guarda lo que contiene c en el arreglo
		k++; 
		cin.get(c); //Para leer el siguiente caracter
	}
	
	
	a=0,e=0,i=0,o=0,u=0; //Inicializacion de variables acumuladoras
	for(int j=0; j<100;j++) //Para movernos en el arreglo
	{
		switch (cadena[j])
		{
			//Codigo para contar el numero de repeticiones (vocales) en el arreglo
			case 'A': a++; break;
			case 'E': e++; break;
			case 'I': i++; break;
			case 'O': o++; break;
			case 'U': u++; break;
		}
	}
	
	//Impresion en pantalla
	cout << "El total de caracteres en el cadena es: " << k+1 << endl; // k+1 para tomar en cuenta el 0
	cout << "El total de A's es: " << a << endl;
	cout << "El total de E's es: " << e << endl;
	cout << "El total de I's es: " << i << endl;
	cout << "El total de O's es: " << o << endl;
	cout << "El total de U's es: " << u << endl;
	return 0;
}