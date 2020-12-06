/*#include <cmath>
#include <string>
#include <complex>
#include "ComplexNumber.h"
*/

ComplexNumber::ComplexNumber(){
	re_ = 1.0;
	im_ = 1.0;
	compute_argument_();
	compute_modulus_();
};

ComplexNumber::ComplexNumber(float re, float im){
	re_ = re;
	im_ = im;
	compute_argument_();
	compute_modulus_();
};

float ComplexNumber::re(){
	return re_;
};

float ComplexNumber::im(){
	return im_;
};

float ComplexNumber::argument(){
	return argument_;
};

float ComplexNumber::modulus(){
	return modulus_;
};

void ComplexNumber::set_re(float new_re){
	re_ = new_re;
	compute_argument_();
	compute_modulus_();
};

void ComplexNumber::set_im(float new_im){
	im_ = new_im;
	compute_argument_();
	compute_modulus_();
};

std::string ComplexNumber::get_algebraic_form(){
	if(im_ > 0){
		return std::to_string(re_) + " +"
				+ std::to_string(im_) + "i";
	}else{
		return std::to_string(re_) + " "
				+ std::to_string(im_) + "i";
	}
};

std::string ComplexNumber::get_polar_form(){
	return std::to_string(modulus_) + "(cos("
			+ std::to_string(argument_) + ") + isin("
			+ std::to_string(argument_)+ "))";
};

ComplexNumber ComplexNumber::sum(ComplexNumber cn){
	return ComplexNumber(re_ + cn.re(), im_ + cn.im());
};

ComplexNumber ComplexNumber::mult(ComplexNumber cn){
	return ComplexNumber(re_*cn.re()-im_*cn.im(), re_*cn.im()+cn.re()*im_);
};

void ComplexNumber::compute_argument_(){
	std::complex<double> mycomplex(re_, im_);
	argument_ = arg(mycomplex);
};

ComplexNumber::~ComplexNumber(){
};



void ComplexNumber::compute_modulus_(){
	modulus_ = sqrt(pow(re_, 2) + pow(im_, 2));
};
