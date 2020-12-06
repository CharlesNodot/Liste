/*#include "List.h"
#include "Node.h"
*/
List::List(){
	head_ = nullptr;
	nb_elts_ = 0;

};


List::List(Node* head, int nb){
	head_ = head;
	nb_elts_ = nb;
};


int List::get_nb_elts(){
	return nb_elts_;

};

void List::set_nb(int nb){
	nb_elts_ = nb;
};


void List::set_head(Node* deb){
	head_ = deb;

};



Node* List::get_head(){
	return head_;

};


void List::PushBack(Node* i){
	if (this -> get_head() == nullptr){
	this -> set_head(i);
	this -> set_nb(1);
	} else {


	(this -> get_head()) -> ajout_Fin(i);
	std::cout<<1<<std::endl;
	this ->set_nb((this -> get_nb_elts()+1));
	}	

};

//par convention, on considère que le parcours des noeuds se fait de l'indice 0 à l'indice "longueur du tableau-1"
void List::Erase(int nb){


	if (nb <= this -> get_nb_elts()-1 && nb > 0){
		if ( nb == 0 ){
			this -> set_head((this -> get_head()) -> get_next());
			this -> set_nb((this->get_nb_elts()-1));
		} else {
			Node* prec = nullptr;
			Node* supp = nullptr;
			Node* suiv = nullptr;
			int nb_copie = nb;
			Node* parcours = this -> get_head();
			nb_copie = nb_copie - 1;
			while (nb_copie !=1){
				parcours = (parcours -> get_next());
				nb_copie = nb_copie -1;
			}
			prec = parcours;
			supp = prec -> get_next();
			suiv = supp -> get_next();
			prec -> set_next(suiv);
			this -> set_nb((this ->get_nb_elts()) -1);
			
		}
		}			

};


void List::Insert(int nb,Node* ad){
//Si la position précisée est trop lointaine, le noeud est simplement ajouté à la fin de la liste
	if (nb>=((this -> get_nb_elts())-1)){
		(this -> get_head() )-> ajout_Fin(ad);
		this -> set_nb((this-> get_nb_elts())+1);
	} else if (nb ==0){
		
		ad -> set_next(this -> get_head());
		this -> set_head(ad);
		this -> set_nb((this-> get_nb_elts())+1);

		} else {
			Node* prec = nullptr;
			Node* parc = this -> get_head();
			int nb_copie = nb;
			
			while (nb_copie !=1){
				parc = parc -> get_next();
				nb_copie = nb_copie -1;
			}
			ad -> set_next(prec -> get_next());
			prec -> set_next(ad);
						

		
	}		



	

	


};


List::~List(){
	Node* i = this -> get_head();
	Node* j = nullptr;
	while( i!= nullptr){
		j = i -> get_next();
		delete i;
		Node* i = j;
		delete j;
	}
	delete[] head_;

		
};









