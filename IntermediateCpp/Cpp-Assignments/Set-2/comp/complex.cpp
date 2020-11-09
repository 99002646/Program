#include <iostream>

using namespace std;

template <class T>
class ComplexNumber
{
public:
    ComplexNumber();
    ComplexNumber(T real , T imaginary);
    ComplexNumber<T> operator+(const ComplexNumber<T>&)const;

    template <class U>
    friend ostream& operator<<(ostream&, const ComplexNumber<U>&);

private:
    T realnumber;
    T imaginarynumber;
};

//Default Constructor
template<class T>
ComplexNumber<T>::ComplexNumber()
{
    realnumber = 0.0;
    imaginarynumber = 0.0;
}


//Constructor which takes in two arguments
template<class T>
ComplexNumber<T>::ComplexNumber(const T real,const T imaginary)
{
    realnumber = real;
    imaginarynumber = imaginary;
}

//Overloaded Addition Operator
template<class T>
ComplexNumber<T> ComplexNumber<T>::operator +(const ComplexNumber<T>& other) const
{
    ComplexNumber<T> temp;
    temp.realnumber = realnumber + other.realnumber;
    temp.imaginarynumber = imaginarynumber + other.imaginarynumber;
    return temp;
}

template<class T>
ostream& operator<<(ostream& out, const ComplexNumber<T>& complex)
{
    out<<complex.realnumber;
    out<<"+";
    out<<complex.imaginarynumber;
    out<<"i";
    return out;
}

int main(){
  ComplexNumber<double> cn1(2,1);
  ComplexNumber<double> cn2(1,1);
  ComplexNumber<double> cn3 = cn1+cn2;
  cout<<cn3<<endl;
}
