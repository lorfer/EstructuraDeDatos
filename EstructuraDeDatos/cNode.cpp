#include "cNode.h" 
#include "string"
cNode::cNode()
{
	valor = 0;
	objNext = nullptr;
}
cNode::cNode(int p_newValor)
{
	valor = p_newValor;
}
void cNode::setNext(cNode* newNext)
{
	objNext = newNext;
}
void cNode::setBack(cNode *newBack)
{
	objBack = newBack;
}
cNode::~cNode()
{
	/* si mata el next en este destroy... se muere la
	cadena de memoria
	*/
}

int cNode::getValor()
{
	return valor;
}

cNode* cNode::getNext()
{
	return objNext;
}

cNode* cNode::getBack()
{
	return objBack;
}
