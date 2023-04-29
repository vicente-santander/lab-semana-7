#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct Num{
	float valor;
	struct Num *next;
};

struct Num* CrearNumero(float val) // crear estructura numero
{
	struct Num *newNumero = (struct Num*)malloc(sizeof(struct Num));
	newNumero->valor = val;
	newNumero->next = NULL;
	
	return newNumero;
}

void AnadirNumero(struct Num **head, struct Num *num) // añadir numero a lista
{
	if (*head == NULL)
		*head = num;
	else
	{
		struct Num *current = *head;
		while (current->next != NULL)
			current = current->next;
		
		current->next = num;
	}
}

void ImprimirNumeros(struct Num *head) // mostrar lista de numeros
{
	struct Num *current = head;
	
	cout << "------------------" << endl;
	cout << "Numeros ingresados" << endl;
	cout << "------------------" << endl;
	while (current != NULL)
	{
		cout << "Numero: " << current->valor << endl;
		current = current->next;
	}
	cout << "------------------" << endl;
}

void FreeNumeros(struct Num *head) // liberacion de memoria
{
	struct Num *current = head;
	while (current != NULL)
	{
		struct Num *next = current->next;
		free(current);
		current = next;
	}
}

void Operaciones(struct Num *head, float *sum, float *mult, float *prom) // realiza todas las operaciones a la vez usando punteros
{
	if (head == NULL)
		return;
	else
	{
		struct Num *current = head;
		int cant = 0;
		while(current != NULL)
		{
			*sum += current->valor;
			*mult *= current->valor;
			cant++;
			
			current = current->next;
		}
		
		*prom = *sum / cant;
	}
}

int main()
{
	struct Num *head = NULL;
	int eleccion = 0;
	float numero;
	float suma = 0, multi = 1, prom = 0;
	
	do{ // ingresando numeros a lista
		cout << "Ingrese Numero Real: ";
		cin >> numero;
		struct Num *Numero = CrearNumero(numero);

		AnadirNumero(&head, Numero);

		cout << endl << "Seguir Ingresando Numeros?" << endl << "[1] Si\t[2] No" << endl;
		do{
			cout << "Eleccion: ";
			cin >> eleccion;
		} while (eleccion < 1 || eleccion > 2);
		cout << endl;
		
	} while (eleccion != 2);
	
	Operaciones(head, &suma, &multi, &prom);
	
	// muestra de operaciones
	ImprimirNumeros(head);
	
	cout << endl << "Suma de Numeros Ingresados: " << suma << endl;
	cout << "Multiplicacion de Numeros Ingresados: " << multi << endl;
	cout << "Promedio de Numeros Ingresados: " << prom << endl;
	
	FreeNumeros(head);
	return 0;
}

