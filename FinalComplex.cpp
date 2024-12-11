#include<iostream>
using namespace std;
class Complex{
	private:
	double real;
	double imag;
	//constructor
	public:
	Complex(double r = 0.0,double i = 0.0):real(r),imag(i){}
	void display()const{
	cout<< real<<" + "<<imag<<endl;
   }
   Complex operator+(const Complex &other)const{
	   return Complex(real+other.real,imag+other.imag);
   }
   Complex operator-(const Complex &other)const{
	   return Complex(real-other.real,imag-other.imag);
   }
   Complex operator*(const Complex &other)const{
	return Complex(real*other.real - imag*other.imag,real*other.real + imag*other.imag);	
   }
   Complex operator/(const Complex &other)const{
		return Complex(real/other.real,imag/other.imag);
   }
};
int main(){
	Complex c1(2,3);
	Complex c2(3,4);
	cout<<"First complex number:: ";
	c1.display();
	cout<<"Second complex number:: ";
	c2.display();
	
	cout<<"Addition:: "<<endl;
	Complex sum = c1+c2;
	sum.display();
	
	cout<<"Difference::"<<endl;
	Complex diff=c1-c2;
	diff.display();
	
	cout<<"Multiply::"<<endl;
	Complex mull = c1*c2;
	mull.display();
	
	try{
		Complex quo=c1/c2;
		cout<<"Quotient:: ";
		quo.display();
	}catch(const invalid_argument &e){
	cout<<"Error"<<e.what()<<endl;
	}
	return 0;
}
