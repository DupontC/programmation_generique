/**
 *
 *      UTILISATION DE LA STL
 *
 **/

#include <iostream> // pour std::cout
#include <string> // pour std::string
#include <vector>
#include <deque>
#include <list>
#include <iterator>
#include <fstream>
#include <algorithm>
#include <ctime>
#include <cstdlib>

#include "classObjets.h"

int main (void){
/*Construisez un deque d de 5 entiers*/
    std::deque<int> d(5);
/*Remplissez d avec des multiples de 4*/
    ObjetFonctions objfonction1(4);
    //std::generate( d.begin(), d.end(), rand );
    std::generate( d.begin(), d.end(), objfonction1 );
    
/* Affichez le contenu de d sur la sortie standard (on construira pour cela un ostream_iterator) associé à la sortie standard et on aura recours à l’algorithme copy de la STL pour copier le contenu de d sur la sortie standard via les itérateurs adéquats.*/
    std::ostream_iterator<int> os1 (std::cout,"\n");
    copy ( d.begin(), d.end(), os1 );
    
/*Construisez un ensemble s1 d’entiers à partir de d*/
    std::deque<int> s1(5);
    copy ( d.begin(), d.end(), s1.begin() );
    
/* Videz d de son contenu */
    d.clear();
    
/* Construisez un ensemble s2 d’entiers par insertion successive de 10 multiples de 2 */
    std::deque<int> s2;
    for(int i=0;i<10;i++)
        s2.push_back(i*2);
    
/* Construisez un ensemble vide s3 */
    std::deque<int> s3;
    
/* Remplissez s3 avec 6 multiples de 3 (on utilisera un insertor sur cet ensemble, ainsi que l’algorithme generate_n, voir site web STL) */
    ObjetFonctions objfonction2(3);
    std::back_insert_iterator<std::deque<int> > it=std::back_inserter(s3);
    std::generate_n(it,6, objfonction2);
    
/*Afficher le contenu des ensembles s1, s2 et s3 en séparant les éléments par des " ; "*/
    std::ostream_iterator<int> os2 (std::cout," ; ");
    std::cout << "\n----- affichage s1 -----" << std::endl;
    copy ( s1.begin(), s1.end(), os2 );
    std::cout << "\n----- affichage s2 -----" << std::endl;
    copy ( s2.begin(), s2.end(), os2 );
    std::cout << "\n----- affichage s3 -----" << std::endl;
    copy ( s3.begin(), s3.end(), os2 );
    
/*Recherchez sur le site web de la STL quelles sont les algorithmes permettant de réaliser des opérations ensemblistes
     Ranger le résultat de l’intersection de s1 et de s2 dans une liste l d’entiers
     */
    std::list<int> l;
    std::list<int>::iterator it2;
    it2 = l.begin();
    l.insert (it2,s1.begin(),s1.end());
    l.insert (it2,s2.begin(),s2.end());
    std::cout << "\n----- affichage  l -----" << std::endl;
    copy ( l.begin(), l.end(), os2 );
    
/* faire l'union de s1 et de s3 dans une liste */
    std::list<int> l2(s1.size()+s3.size());
    //on trie s1 et s3
    sort (s1.begin(),s1.end()); 
    sort (s3.begin(),s3.end());
    set_union(s1.begin(), s1.end(), s3.begin(), s3.end(), l2.begin());
    std::cout << "\n----- affichage  l2 -----" << std::endl;
    copy ( l2.begin(), l2.end(), os2 );
    
    
    std::cout << "\nfin du main " <<std::endl;
}

