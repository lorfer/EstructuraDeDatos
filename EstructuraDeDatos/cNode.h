#pragma once
class cNode {
private:
		int valor;
		cNode* objNext;
		cNode* objBack;
public:  
		 cNode();
		  cNode(int);
		  ~cNode();
		  void setNext(cNode*);
		  void setBack(cNode*);
		  int getValor();
		  cNode* getNext();
		  cNode* getBack();

};