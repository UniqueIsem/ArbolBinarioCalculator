//el plan es tokenizar una cadena guardandola dentro de un vector para darle una posicion a los caracteres dentro de la cadena
#include "Nodo.h"

void Nodo::crearNodo(char c) { //crea un nodo ¿vacio?
	Nodo* nuevoNodo = new Nodo();
	nuevoNodo->operacion = c;
	nuevoNodo->der = NULL;
	nuevoNodo->izq = NULL;
	tree = nuevoNodo;
}

void Nodo::insertar(Nodo*& tree, char c) {
	if (tree == NULL) { // crea un nodo si el arbol está vacio
		crearNodo(c);
	}
	if(tree->izq == NULL) { //si el nodo izquierdo no contiene un dato, inserta el dato a la izquieda 
		insertar(tree->izq, c);
	}
	else if (tree->izq != NULL) {//si existe un dato en el nodo izquierdo, inserta el dato a la derecha
		insertar(tree->der, c);
	}
	while (operacion != NULL) { //hace un bucle donde aumenta la posicion de los caracteres de la cadena operacion hasta que llegue al final
		if (operacion == '(') { //si detecta la apertura de un parentesis crea un nodo
			insertar(tree, c);
		}
		else if (operacion == numero) { //si detecta un numero crea un nodo y lo inserta dentro del mismo
			crearNodo(c);
			insertar(tree, c);
		}
		else if ((operacion == suma) || (operacion == resta) || (operacion == mult) || (operacion == div)) { //si detecta un operador regresa una posicion del arbol e inserta el operador 
			cout << "Regresar un nodo e insertar operador" << endl;
			//insertar(operador)
		}
		else if (operacion == ')') { //si detecta el cierre de un parentesis regresa una posicion del arbol
			cout << "Regresar un nodo" << endl;
		}
	}
}

void Nodo::mostrarArbol(Nodo*& tree, char c) {
	if (tree == NULL) {
		return;
	}
	else {
		mostrarArbol(tree->der, c + 1);
		for (int i = 0; i < c; i++) {
			cout << "   ";
		}
		cout << tree->operacion << endl;
		mostrarArbol(tree->izq, c + 1);
	}
}
//void Nodo::token(Nodo*& tree, char c) {}