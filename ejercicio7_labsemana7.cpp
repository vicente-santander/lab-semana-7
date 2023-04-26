#include <iostream>
#include <string>
using namespace std;

bool esPalindromo(string cadena, int size){
    for(int i = 0; i < size/2; i++)
        if(cadena[i] != cadena[size-i-1]) 
            return false;
    return true;   
}
int main(){
    string cadena;
    bool palindromo;
    cout << "Ingresa la cadena sin espacios: ";
    getline(cin, cadena);    
    palindromo = esPalindromo(cadena, cadena.length());  
    if(palindromo == true){
    	cout << "\nEs palindromo \n"; 
	}
    else{
    	cout << "\nNo es palindromo \n";
	} 
    
    return 0;    
}
