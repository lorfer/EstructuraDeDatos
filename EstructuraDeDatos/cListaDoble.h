#pragma once
#include "cNode.h" 
#include <string>

using namespace std; 

class cListaDoble {
private:
	cNode* objLastNode;

public:
	cListaDoble();

	~cListaDoble();

	void Alta(int);

	int Baja();

	string toString();
};