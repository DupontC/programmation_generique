
#ifndef ____echange__
#define ____echange__

#include <iostream> // pour std::cout
#include <string> // pour std::string
#include <vector>
#include <fstream>

//on delcare un template composé d'un typename pour la fonction echange. (typename >>> type générique qui peut prendre des int, double , string,...)
template <typename T>
 void echange(T &e1, T&e2){
 	T tmp;
 	tmp=e1;
 	e1=e2;
 	e2=tmp;
 }

//on delcare un template composé d'un typename pour la fonction min. (typename >>> type générique qui peut prendre des int, double , string,...)
template <typename T>
T& min(T &e1, T&e2){
	if(e1<e2)
		return e1;
	else
		return e2;
}

std::string min(std::string e1, std::string e2){
	if(e1.size()==e2.size())
		return " chaine de même longeur";
	else if(e1.size()<e2.size())
		return e1;
	else
		return e2;
}

//on delcare un template composé d'un typename et d'un entier pour la fonction trieTab. (typename >>> type générique qui peut prendre des int, double , string,...)
template <typename T,unsigned int TAILLE>
void trieTab(T tab[]){
	for(int i = 0 ; i < TAILLE ; i++){
		for(int j = 0 ; j < TAILLE-1 ; j++){
			if(tab[j]>tab[j+1]){
				T tmp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = tmp;
			}
		}
	}
}

//on delcare un template composé d'un typename et d'un entier pour la fonction affiche. (typename >>> type générique qui peut prendre des int, double , string,...)
template <typename T,unsigned int TAILLE>
void afficheTab(T tab[]){
	std::cout << " tab [" ;
	for(int i = 0 ; i < TAILLE ; i++){
		std::cout << " " << tab[i] << " "; 
	}
	std::cout << " ]" << std::endl;
}

#endif
