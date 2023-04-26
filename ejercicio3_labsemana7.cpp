#include <iostream>
#include <string>

using namespace std;

int longitud(){
	string palabra;
	int length;
	
	cout << "Introduce una palabra: ";
	cin >> palabra;
	
	return palabra.length();
}

int main(){
	int length;
	
	length = longitud();
	cout << "el largo de la palabra es: " << length;
	
	return 0;
}
