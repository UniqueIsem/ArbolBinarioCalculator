#include "Arbol.h"

void Arbol::menu() {
	while (menuOption != 2) {
		cout << endl;
		cout << "------------MENU---------------" << endl;
		cout << "- 1. Ingresar operacion -------" << endl;
		cout << "- 2. Salir del programa -------" << endl;
		cout << "-------------------------------" << endl;
		cout << "Inrgese la opcion que desea realizar: ";
		cin >> menuOption;
		cout << endl;
		switch (menuOption) {
		case 1: startProgram();
			break;
		case 2: system("cls");
			cout << "Adios" << endl;
			system("pause");
		default: system("cls");
			cout << "Opcion inexistente...vuelva a intentarlo" << endl;
			break;
		}
	}
}


void Arbol::startProgram() {
	while (operacion != 'z' || 'Z') {
		system("cls");
		mostrarArbol(tree, contador);
		cout << endl;
		cout << "NOTA: cuando termine de escribir su operacion presione 'z'" << endl;
		cout << "INGRESE DIGITO TRAS DIGITO: ";
		cin >> operacion;
		if (operacion == '(') {
			crearNodo(operacion);
		}
		else {
			insertar(tree, operacion);
		}
	}
}