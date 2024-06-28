/*
Programa que realiza las siguientes acciones:
a) El programa debe pedir, por separado, dos numeros al usuario
b) En caso de que el primer numero no sea impar, debe volver a pedirlo
inmediatamente
c) En caso de que el segundo no sea impar, debe volver a pedirlo
inmediatamente
*/


#include <iostream>
using namespace std;
int main(){
	int num1, num2, suma=0; //num1 y num2 para leer los numeros, suma para acumular el resultado
	
	do
	{
		//Codigo para pedirle al usuario ambos numeros
		cout << "Ingresa el primer numero: ";
		cin >> num1; //Lee numero 1
		cout << "Ingresa el segundo numero: ";
		cin >> num2; //Lee numero 2
	}
	while((num1 % 2 == 0) || (num2 % 2 == 0)); // No saldra del ciclo hasta que la condicion sea falsa
	
	suma = num1 + num2; //Para hacer la suma
	cout << "La suma de " << num1 << " y " << num2 << " es: " << suma; //Imprime en pantalla el resultado
	return 0;
}