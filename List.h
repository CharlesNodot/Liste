

class List
{
	public:
		Node* get_head();
		int get_nb_elts();
		List();
		List(Node* head, int nb);
		void PushBack(Node* aj);
		void Erase(int nb);
		void Insert(int nb,Node* ad);
		~List();
	protected:
		Node* head_;
		int nb_elts_;
		void set_nb(int nb);		
		void set_head(Node* deb);
		

};
