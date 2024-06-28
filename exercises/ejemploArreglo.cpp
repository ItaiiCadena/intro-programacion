#include <iostream>
using namespace std;
 
int main(){
	int arr[4]; //Definiendo arreglo
    //Agregando elementos al arreglo
	arr[0] = 1;
	arr[1] = 9;
	arr[2] = 7;
	arr[3] = 5;
    //Realizando operaciones sobre el arreglo 
	for(int i=0; i<4;i++){
		if(i >= 2 && i <= 2)
		cout << arr[i] + arr[i+1] << endl;
		cout << arr[i] - arr[i+1] << endl;
		cout << arr[i] * arr[i+1] << endl;
		cout << arr[i] / arr[i+1] << endl;
	}
	return 0;
}