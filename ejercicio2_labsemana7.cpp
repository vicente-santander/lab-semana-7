#include <iostream>
#include <string>
using namespace std;

int promedio(int a, int b, int c){
	int prom;
	
	prom = (a+b+c)/3;

return prom;
}

int main(){
	int a, b, c;
	int prom;
	
	cout << "Introduce el primer numero: ";
    cin >>  a;
	cout << "Introduce el segundo numero: ";
    cin >>  b;
    cout << "Introduce el tercer numero: ";
    cin >>  c;
	
	prom = promedio(a,b,c);
	
	cout << "el promedio es: " << prom;
	
	return 0;
}
