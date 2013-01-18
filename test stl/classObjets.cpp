#include "classObjets.h"

 ObjetFonctions::ObjetFonctions(int val){
 	std::cout << "appel au construteur" << std::endl;
 	this->val=val;
 	this->nbAppel = 0;
 }

 int ObjetFonctions::operator () (){
 	nbAppel++;
	return nbAppel*val;
 }
