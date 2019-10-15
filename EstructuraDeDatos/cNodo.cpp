
#include "cNode.h" 
cNode::cNode()
{
	Value = 0;
	objNext = NULL;
}
cNode::cNode(int p_newValor)
{
	Value = newValor;
}
void cNode::setNext(cNode* newNext)
{
	objNext = newNext;
}
cNode::~cNode()
{
	/* si mata el next en este destroy... se muere la
	cadena de memoria
	*/
}
int cNode::getValue()
{
	return Value;
}
cNode* cNode::getNext()
{
	return objNext;
}