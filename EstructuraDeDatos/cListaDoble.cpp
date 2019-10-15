
#include "cNode.h"
#include "cListaDoble.h"
#include <sstream>

using namespace std;

cListaDoble::cListaDoble()
{
	objLastNode = NULL;
}

cListaDoble::~cListaDoble()
{
	delete objLastNode;
}

void cListaDoble::Alta(int valor)
{
	cNode* objNewNode = new cNode(valor);   
	objNewNode->setNext(objLastNode);  
	if (objLastNode != NULL)    
		objLastNode->setBack(objNewNode); 
	objLastNode = objNewNode;
	////aqui se hace el doble enlace 
	//cNode* nuevoObj = new cNode(valor);
	//nuevoObj->setNext(nuevoObj);

	//if (objLastNode != NULL)
	//{
	//	objLastNode->setBack(nuevoObj);

	//	objLastNode = nuevoObj;
	//}

}

int cListaDoble::Baja()
{

	cNode* objActualNode = objLastNode;   
	int result = 0;   
	if (objActualNode != NULL) 
	{ result = objActualNode->getValor();       
	objLastNode = objActualNode->getNext(); 
	}     delete objActualNode;      
	return result;
	
}

string cListaDoble::toString()
{
	stringstream list;

	list << "---Lista Estructurada ----" << endl<<"----"<<endl;

	cNode* objLast = objLastNode;
	while (objLast != NULL) {
		list <<objLast->getValor() << "-->";

		if (objLast->getNext() != NULL)
			list <<objLast->getNext()->getValor()<<endl;
		else
			list << "NULL" << endl;

		objLast = objLast->getNext();
	}
	return list.str();
}

