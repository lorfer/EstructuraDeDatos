#pragma once
#include"cNode.h"
#include<string>
using namespace std;
 class cListaSimple{
 private:
 cNode * mv_objLastNode; 
 public:
	 cListaSimple(); 
		~cListaSimple(); 
		void Alta(int); 
		int Baja(); 
		string toString(); 
		};