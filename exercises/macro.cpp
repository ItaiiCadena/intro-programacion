#include <iostream>
using namespace std;
#define Escribir10Veces\
{\ 
	for(int i=0; i<10; i++)\
	{cout << "Hola" << endl;}\
}\

///Las diagonales son los saltos de linea
/// Se puede escribir de la siguiente forma
/// #define Escribir10Veces { for(int i=0; i<10; i++){cout << "Hola" << endl;}}

int main()
{
	Escribir10Veces;
	return 0;
}