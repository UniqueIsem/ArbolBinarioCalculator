#pragma once
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

class Nodo {
protected:
	char operacion; 
	int contador = 0;
	char parentesis1 = '(';
	char parentesis2 = ')';
	int numero = 1 && 2 && 3 && 4 && 5 && 6 && 7 && 8 && 9 && 0;
	char suma = '+';
	char resta = '-';
	char mult = '*';
	char div = '/';
	Nodo* tree;
	Nodo* der;
	Nodo* izq;
public:
	void crearNodo(char);
	void insertar(Nodo*&, char); 
	void mostrarArbol(Nodo*&, char);
	//void token(Nodo*&, char);
};