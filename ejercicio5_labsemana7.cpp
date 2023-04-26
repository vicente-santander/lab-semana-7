#include <iostream>
#include <string>
using namespace std;

int factorial(){
	int factorial;
	int i;
	int result;
	
	cout << "cuantos numeros se aplicara factorial: ";
	cin >> factorial;
	
	for (i=1; i <= factorial;i++){
		result = result * i;
	}
	
	return result;
}

int main(){
	int result;
	
	result = factorial();
	
	cout << "el resultado factorial es: " << result;
	
	
	return 0;
}


