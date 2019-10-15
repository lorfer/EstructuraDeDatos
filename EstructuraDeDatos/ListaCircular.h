#pragma once 
#include "cNode.h" 
#include <string> 
using namespace std;
class cListaCircular
{
private:
	cNode* objLastNode;
	cNode* objFirstNode;
public:
	cListaCircular();
	~cListaCircular();
	void Alta(int p_int_Valor);
	int Baja();
	void Guardar();
	void Leer();
	int getInteger(string p_str);
	string toString();
};

