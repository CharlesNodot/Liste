#include<iostream>
#include<string>
#include <cmath>
#include <string>
#include <complex>
#include"ComplexNumber.h"
#include"ComplexNumber.cpp"
#include"Node.h"
#include"Node.cpp"
#include"List.h"
#include"List.cpp"
  int main(int argc, char const *argv[])
  {	ComplexNumber* cn1 = new ComplexNumber(1.0,1.0);
	ComplexNumber* cn2 = new ComplexNumber(2.0,2.0);
	ComplexNumber* cn3 = new ComplexNumber(3.0,3.0);
	ComplexNumber* cn4 = new ComplexNumber(4.0,4.0);
	ComplexNumber* cn5 = new ComplexNumber(5.0,5.0);
	std::cout << "Algebraic form of cn1 : " << cn1->get_algebraic_form() << std::endl;
	
	//Test classe Node	
		
	Node* n1 = new Node();
	std::cout << "Node Default constructor test : " << n1->get_el() << std::endl;
	
	Node* n2 = new Node(cn2, n1);
	std::cout << "Adresse du nombre complexe : " << cn1 << "  même noeud dans le nombre complexe : "<< n2 -> get_el() << std::endl;
	std::cout <<"Adresse d'un noeud : " << n1 << "adresse du noeud stocké dans un autre noeud : " << n2 -> get_next()<< std::endl; 

	
	
	std::cout <<"Test des fonctions set sur les attributs de Node "<< std::endl; 
	std::cout <<"Adresse attribut nb complexe avant " << n1 -> get_el() << std::endl;
	n1->set_el(cn2); 
	std::cout <<"Adresse attribut nb complexe après " << n1 -> get_el() << std::endl; 
	std::cout <<"Adresse attribut noeud suivant avant " << n1 -> get_next() << std::endl;
	n1->set_next(n2);
	std::cout <<"Adresse attribut noeud suivant après " << n1 -> get_next() << std::endl; 
	
	//création d'une liste de Nodes
	Node* no4 = new Node(cn4,nullptr);
	Node* no3 = new Node(cn3,no4);
	Node* no2 = new Node(cn2,no3);
	Node* no1 = new Node(cn1,no2);
	Node* no5 = new Node(cn5,nullptr);
	
	std::cout <<"Adresse attribut noeud suivant avant ajout de l'élément en fin de liste " << no4 -> get_next() << std::endl;
	no1 -> ajout_Fin(no5);
	std::cout <<"Adresse du noeud normalement ajouté en fin de liste : "<< no5 << std::endl;
	std::cout <<"Adresse du noeud effectivement ajouté en fin de liste: "<<no4 ->get_next() <<std::endl;

	//Test classe List
  	List* l1 = new List();
	std::cout<<"Tête et nb d'éléments d'une liste vide : "<<l1 -> get_head()<<" ; "<< l1 ->get_nb_elts()<<std::endl;
	List* l2 = new List(no1,5);
	std::cout<<"adresse de la tête de liste et appel via le getter : "<<no1<<" ; "<< l2 -> get_head()<<std::endl;
	l1 -> PushBack(no5);
	std::cout<<"tête de liste et nb d'éléments de la liste vide à laquelle on a ajouté un élément : "<<l1 -> get_head()<<" ; "<< l1 -> get_nb_elts()<<std::endl;
	Node* no6 = new Node(cn5,nullptr);
	l1 -> PushBack(no6);
	std::cout<<"tête de liste et nb d'éléments d'une liste à laquelle on a ajouté un élément : "<<l1 -> get_head()<<" ; "<< l1 -> get_nb_elts()<<std::endl;
	

	l1 -> Insert(10,no6);
	std::cout<<"vérification de l'ajout de l'élément dans la liste en vérifiant que deux éléments sont bien présents dedans :"<<l1 -> get_nb_elts()<<std::endl;
	std::cout<<"nb d'éléments dans la liste avant suppression de l'un d'entre eux : "<<l1 -> get_nb_elts()<<std::endl;	
	l1 -> Erase(1);
	std::cout<<"nb d'éléments dans la liste après suppression de l'un d'entre eux : "<< l1 -> get_nb_elts() << std::endl;








  	return 0;
  }
