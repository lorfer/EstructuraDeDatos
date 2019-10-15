//Archivo Main.cpp
//#include "stdafx.h" 
#pragma once
#include <Windows.h> 
#include "cNode.h"  
#include "ListaCircular.h"  
#include "cListaDoble.h"
#include <string>  
#include "sstream"  
#include <iostream> 
#include "cListaSimple.h"

using namespace std;
 
  void DisplayCicleList() {
	 cListaCircular objLista = cListaCircular();
	 int intInput = 0;
	 do {
		 cout << "Entre List: ";
		 cin >> intInput;
		 objLista.Alta(intInput);
		 cout << "Continue?[0=>No,1=>Si]";
		 cin >> intInput;
	 } while (intInput > 0);
	 cout << "Lista:" << objLista.toString() << endl;
	 objLista.Guardar();
	 cout << "Borra el ultimo :" << endl << endl;
	 cout << "Ultimo:" << objLista.Baja() << endl;
	 cout << "Lista:" << objLista.toString() << endl;
	 cout << "Estos son todos los valores hasta el Momento! :" << endl;
	 objLista.Leer();
	 cout << "Lista:" << objLista.toString() << endl;
	 system("pause");
}

  void DisplayDoubleList()
  {
	  cListaDoble objListDoble = cListaDoble();
	  int lv_Iter;
	  int v_Iter;     
	  int intInput = 0;     
	  do {
		  cout << "Entre List: " <<endl;   
		  cin >> intInput;         
		  objListDoble.Alta(intInput);
		  cout << "\nContinue?[0=>No,1=>Si]: ";       
		  cin >> intInput;
	  } while (intInput > 0);       
	  cout << "Lista: " << objListDoble.toString() << endl;
	  cout << "Ultimo: " << objListDoble.Baja() << endl;
	  cout << "Lista: " << objListDoble.toString() << endl;
	  system("pause");     
	  return;
  }


  void DisplaySimpleList()
  {
	   cListaSimple listaSimpleLista = cListaSimple();
	   int lv_Iter = 0;
	   int entrada = 0;
	   do{
		   cout << "Entre Lista" << lv_Iter;
		   cin >> entrada;
			  
		   listaSimpleLista.Alta(entrada);
		   cout << "Continue?[0=>No,1=>Si]";
		   cin >> entrada;
	   } 
	   while(entrada > 0);
	   cout << "Lista:"<< listaSimpleLista.toString()<< endl;
	   cout << "Ultimo:"<< listaSimpleLista.Baja()<<endl;
	   cout << "Lista:"<< listaSimpleLista.toString() << endl;
	   system("pause");return;
  }

  int main() {

	  enum MyEnum
	  {
		  listaCircular = 1,
		  listaDoble = 2,
		  listaSimple = 3
	  };
	  int resp;

	  cout << "En que quieres trabajar: 1->Lista Circular, 2-> Lista Doble, 3 -> Lista Simple " << endl;
	  cin >> resp;
	  switch (resp)
	  {

	  case listaCircular:
		  DisplayCicleList();
		  return 0;
		  break;
	  case listaDoble:
		  DisplayDoubleList();
		  return 0;

		  break;
	  case listaSimple:
		  DisplaySimpleList();
		  return 0;
		  break;
	  default:

		  break;
	  }

  }