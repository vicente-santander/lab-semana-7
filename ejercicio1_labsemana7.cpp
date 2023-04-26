#include <iostream>
#include <string>
using namespace std;


void IntOrString(){
	string a;
	int b;
	
	cout << "Introduce una palabra: ";
    cin >>  a;
    
    cout << "Introduce un numero: ";
    cin >>  b;
    
    cout << "palabra:" << a << endl ;
	cout << "numero:" << b;
	
}
int main(){
	
	IntOrString();
	
	return 0;
}
