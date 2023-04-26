#include <iostream>
#include <string>
using namespace std;

int fibonacci(int num){
	if(num<=1){
		return num;
	}
	return fibonacci(num-1) + fibonacci(num-2);
}

int main(){
	int digito;
	cout << "digito de fibonacci que desea conocer: ";
	cin >> digito;
	
	int result = fibonacci(digito);
	
	cout << "digito fibonacci " << digito << " resultado: " << result;
	
	return 0;
}
