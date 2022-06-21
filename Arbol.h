#pragma once
#include "Nodo.h"

class Arbol : public Nodo{
private:
	int menuOption;
public:
	void menu();
	void startProgram();
};

