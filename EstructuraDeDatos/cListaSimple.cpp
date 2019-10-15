
#include <cstddef>
#include <string>
#include <sstream>
#include "cListaSimple.h"
cListaSimple::cListaSimple() {
	mv_objLastNode = NULL;
}

cListaSimple::~cListaSimple() {
	delete mv_objLastNode;
}
void cListaSimple::Alta(int p_int_Valor)
{
	cNode* lv_objNewNode = new cNode(p_int_Valor);
	lv_objNewNode->setNext(mv_objLastNode);
	mv_objLastNode = lv_objNewNode;

}
int cListaSimple::Baja() {

	cNode* lv_objActualNode = mv_objLastNode;
	int lv_Result = 0;

	if (lv_objActualNode != NULL)
	{
		lv_Result = lv_objActualNode->getValor();
		mv_objLastNode = lv_objActualNode->getNext();
	}
	delete lv_objActualNode;
	return lv_Result;
}
string cListaSimple::toString()
{
	stringstream lv_strlist;
	lv_strlist << "Estructura de la Lista:" << endl << "------------------------" << endl;

	cNode* objLast = mv_objLastNode;

	while (objLast != NULL) {

		lv_strlist << objLast->getValor() << "-->";
		if (objLast->getNext() != NULL)
			lv_strlist << objLast->getNext()->getValor() << endl;
		else
			lv_strlist << "Null" << endl;
		objLast = objLast->getNext();
	}
	return lv_strlist.str();
}
