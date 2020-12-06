//#include<string>
using namespace std;
class ComplexNumber
{
	public:
		ComplexNumber();  //constructeur par défaut
		ComplexNumber(float re, float im);  //constructeur modifiable
		~ComplexNumber();
		float re();
		float im();
		float argument();
		float modulus();
		void set_re(float new_re);
		void set_im(float new_im);
		std::string get_algebraic_form();
		std::string get_polar_form();
		ComplexNumber sum(ComplexNumber cn);
		ComplexNumber mult(ComplexNumber cn);
	protected:
		float re_;
		float im_;
		float argument_;
		float modulus_;

		void compute_argument_();
		void compute_modulus_();
};
