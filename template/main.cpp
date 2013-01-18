
#include <iostream> // pour std::cout
#include <string> // pour std::string
#include <vector>
#include <fstream>

#include "template.h" 


int main (void){
	std::cout << "\n----------- Echange -----------" <<std::endl;
	int a=1;
	int b=7;
	std::cout << "a="<< a << " b="<< b << std::endl;
	//on echange 2 int
	echange(a,b);
	std::cout << "a="<< a << " b="<< b << std::endl;
	
	double c=4.5;
	double d=6.3;
	std::cout << "c="<< c << " d="<< d << std::endl;
	//on echange 2 double
	echange(c,d);
	std::cout << "c="<< c << " d="<< d << std::endl;
	
	std::string e="lolo";
	std::string f="popo";
	std::cout << "e="<< e << " f="<< f << std::endl;
	//on echange 2 String
	echange(e,f);
	std::cout << "e="<< e << " f="<< f << std::endl;
	
	std::cout << "\n---------- Comparaison ----------" <<std::endl;
	//on compare 2 int
	std::cout << "[a,b] min("<< a << ","<< b <<") --> " << min(a,b) << std::endl;
	//on compare 2 double
	std::cout << "[c,d] min("<< c <<","<< d <<") --> " << min(c,d) << std::endl;
	//on compare 2 String
	std::cout << "[e,f] min("<< e <<","<< f <<") --> " << min(e,f) << std::endl;
	
	std::cout << "\n----------- Trie tab -----------" <<std::endl;
	//declaration de tableau de int
	int t1[]={1,3,7,8,4,1,2};
	//on affiche le tableau non trier t1 <type int , taille 7>
	afficheTab<int,7>(t1);
	//on trie le tableau t1 <type int , taille 7>
	trieTab<int,7>(t1);
	//on affiche le tableau trier t1 <type int , taille 7>
	afficheTab<int,7>(t1);
	
	//declaration de tableau de double
	double t2[]={2.2,5.6,6.8,2.1,4.4,1.0,9.1,3.6,7.7};
	//on affiche le tableau non trier t1 <type double , taille 7>
	afficheTab<double,9>(t2);
	trieTab<double,9>(t2);
	//on affiche le tableau non trier t2 <type double , taille 9>
	afficheTab<double,9>(t2);


	return 0;
}
