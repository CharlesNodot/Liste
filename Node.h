
class Node
{	friend class List;
	public:

	Node();//constructeur par défaut
	Node(ComplexNumber* u,Node* v); //constructeur paramétrable
	Node(Node* v); //constructeur de copie 	
	Node* get_next();
	void set_next(Node* autre);
	~Node();
	ComplexNumber* get_el();
	void set_el(ComplexNumber* el);
	void ajout_Fin(Node* ajout);

	protected:

	Node* next_;
	ComplexNumber* el_;




};
