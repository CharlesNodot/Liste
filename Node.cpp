/*#include <cmath>
#include <string>
#include <complex>
#include "Node.h"
#include"ComplexNumber.h"*/
//créé par défaut une instance avec un pointeur Next_ nul et un nombre nul.
Node::Node(){
	el_ = nullptr;
	next_ = nullptr;	
};


Node::Node(ComplexNumber* ri,Node* next){
	next_=next;
	el_=ri;
};

Node::Node(Node* u){
//les attributs sont copiés
	next_ = (u -> get_next());
	el_ = new ComplexNumber((u -> get_el())->re(),(u -> get_el())->im());

};

ComplexNumber* Node::get_el(){
	return el_;
};

void Node::set_el(ComplexNumber* el){
	el_ = el;
};

void Node::set_next(Node* autre){
	next_ = autre;
};

Node* Node::get_next(){
	return next_;
};

void Node::ajout_Fin(Node* ajout){
//trouver le dernier élément de la liste
	Node* i = nullptr;
	i = this;
	
	while( (i -> get_next()) != nullptr){
		i = (i -> get_next());	 
	}
//une fois qu'on l'a trouvé, on met cet élément dans la liste 
	
	i->set_next(ajout);
};

Node::~Node(){
	delete el_;
	delete next_;
};





