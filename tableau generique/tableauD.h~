#ifndef tableau_generique_h
#define tableau_generique_h

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>
#include <map>
#include <stdlib.h>

//definition du template
template <typename T,unsigned int tailleInst>
class TableauD{
public:
	T* monTableau;
	int size;
	int nbElement;
	
	//construteur par default
	TableauD(){
	        std::cout << "construteur default" << std::endl;
		 monTableau = new T[10];
		 size=10;
		 nbElement=0;
	}

	//construteur copie
	TableauD(const TableauD<T, tailleInst>& tabACopier){
		std::cout << "construteur copie" << std::endl;
		//on alloue le tableau
		monTableau = new T[tabACopier.size];
		size = tabACopier.size;
		nbElement= tabACopier.nbElement;
		
		//on fait la copies des elements
		for(int i=0 ; i<tabACopier.nbElement; i++ ){
			monTableau[i]=tabACopier[i];
		}	
	}

	//construteur avec paramete (taille tab)
	TableauD(int uneTaille){
		std::cout << "construteur parametre" << std::endl;
		 monTableau = new T[uneTaille];
		 size=uneTaille;
		 nbElement=0;
	}

	//ajouter un element generique au tab
	void ajouter(T element){
		if(nbElement+1<=size){
			std::cout << "ajout d'un element" << std::endl;
			//on ajout l'element
			monTableau[nbElement]=element;
			//on increment le nbElement
			nbElement++;
		}
		else{
			std::cout << "reallocation du tableau" << std::endl;
			//on agrandie le tableau
			agrandireTabGenerique();
			
			std::cout << "ajout d'un element" << std::endl;
			monTableau[nbElement]=element;
			//on increment le nbElement
			nbElement++;
			
		}
	}

	//accée element avec un indice
	T & operator [](int i){
		if(i<=size-1){
			for(int j = 0 ; j <= i ; j++){
				if(i==j){
					return monTableau[j];
				}
			}
		}
	}
	//destruteur
	~TableauD(){
		std::cout << "destruteur" << std::endl;
	}

private:
	//fonction interne pour re-agrandire le tab
	void agrandireTabGenerique(){
		//on cree un tableau dynamique plus grand
		T * bis = new T[size+tailleInst];
		//on fait la copie du tableau 
		copie(monTableau,nbElement,bis);
		delete[]monTableau;
		//on fait pointer vers ce nouveau tableau generique (le + grd)
		monTableau = bis;
		size=size+tailleInst;
	}
	
	//fonction de copie de tableau
	void copie(T * tab1, int nbElement, T * tab2){
		//on fait la copies des elements
		for(int i=0 ; i<nbElement; i++ ){
			tab2[i]=tab1[i];
		}
	}
};

#endif
