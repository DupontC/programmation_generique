#ifndef ____objetFonction__
#define ____objetFonction__

#include <iostream> // pour std::cout
#include <string> // pour std::string
#include <vector>
#include <fstream>


class ObjetFonctions{

public:
//construteur
 ObjetFonctions(int val);
 //methode pour l'utilisation de l'objet fonction
 int operator () ();
private:
//varaible de classe
 int nbAppel;
 int val;
 
};

#endif
