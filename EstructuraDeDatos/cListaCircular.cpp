#include "ListaCircular.h" 
#include <string> 
#include "sstream" 
#include <fstream> 
#include <iostream> 
cListaCircular::cListaCircular()
{
	objLastNode = NULL;
	objFirstNode = NULL;
}
cListaCircular::~cListaCircular()
{
	delete objLastNode;
	delete objFirstNode;
}


void cListaCircular::Alta(int p_int_Valor)
{
	cNode* objNewNode = new cNode(p_int_Valor);
	if (objLastNode != NULL)
	{
		objNewNode->setNext(objLastNode);
		objFirstNode->setNext(objNewNode);
		objLastNode = objNewNode;
	}
	else
	{
		objNewNode->setNext(objNewNode);
		objLastNode = objNewNode;
		objFirstNode = objNewNode;
	}
}
int cListaCircular::Baja() {
	cNode* objActualNode = objLastNode;
	int Result = 0;
	if (objActualNode != NULL)
	{
		Result = objActualNode->getValor();
		objLastNode = objActualNode->getNext();
		objFirstNode->setNext(objLastNode);
	}
	delete objActualNode;
	return Result;
}
void cListaCircular::Guardar() {
	ofstream FILE = ofstream();
	FILE.open("C:\\Users\\Randy\\source\\repos\\EstructurasDeDatos\\ValListaCir.txt", ios::app);
	cNode* objLast = objLastNode;
	cNode* objFirst = objLastNode;
	FILE << objLast->getValor() << endl;
	objLast = objLast->getNext();
	while (objLast != objFirst)
	{
		FILE << objLast->getValor() << endl;
		FILE << objLast->getNext()->getValor() << endl;
		objLast = objLast->getNext();
	}
}
void cListaCircular::Leer() {
	ifstream FILE = ifstream();
	FILE.open("C:\\Users\\Randy\\source\\repos\\EstructurasDeDatos\\ValListaCir.txt", ios::app);
	string LineaPuntos;
	while (FILE.good())
	{
		getline(FILE, LineaPuntos);
		this->Alta(getInteger(LineaPuntos));
	}
	FILE.close();
}
int cListaCircular::getInteger(string p_str)
{
	istringstream buffer_Int(p_str);
	int num = 0;
	try
	{
		if (!buffer_Int.bad())
			buffer_Int >> num;
	}
	catch (exception& e)
	{
		num = 0;
	}
	return num;
}
string cListaCircular::toString()
{
	stringstream list;
	list << "Estructura de la Lista:" << endl << "------------------------" << endl;
	cNode* objLast = objLastNode;
	cNode* objFirst = objLastNode;
	list << objLast->getValor() << "-->";
	objLast = objLast->getNext();
	list << objLast->getValor() << endl;
	while (objLast != objFirst)
	{
		list << objLast->getValor() << "-->";
		list << objLast->getNext()->getValor() << endl;
		objLast = objLast->getNext();
	}
	return list.str();
}