#include <iostream>
using namespace std;

struct complex
{//public:
  double re,im;
};
complex a,b;
void afisare(complex p){cout<<p.re<<p.im;}

class Complex
{//private:
  double re,im;//date
  public:
 void afisare();//metode
};
void Complex::afisare()
{//this =adresa abiectului implicit(care apeleaza metod)
cout<<(*this).re<<this->re<<re;
Complex C; C.re=0;//am acces la datele TUTUROR obiectelor
}
Complex A,B;//obiecte

int main()
{ afisare(a);
  afisare(b);
  cout<<a.re;
  A.afisare();//this=&A *this =A
  B.afisare();//this=&B *this=B

}