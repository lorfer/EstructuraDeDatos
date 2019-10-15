#pragma once
class cNode
{
private:
	int Value;
	cNode* objNext;
public:
	cNode();
	cNode(int p_newValor);
	~cNode();
	void setNext(cNode* p_newNext);
	int getValue();
	cNode* getNext();

};

