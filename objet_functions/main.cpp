#include <iostream> // pour std::cout
#include <string> // pour std::string
#include <vector>
#include <fstream>

#include "classObjets.h"

int main () {
	//declaration de mon objet fonction
	ObjetFonctions objfonction;
	int val=3;
	std::cout << "on affiche les multiples de "<< val << std::endl;
	for(int i=0 ; i<=100 ; i++){
		//utilisation de mon objet fonction via l'appel à la methode operator
		std::cout << objfonction(val) << std::endl;
	}
	return 0;
}
