#include<iostream>
using namespace std;
class complex
{
float real,img;
public:
void read();
void print();
friend complex ADD(int,complex);
friend complex ADD(complex,complex);
};
void complex::read()
{
cin>>real>>img;
}
void complex::print()
{
cout<<real<<"+i"<<img;
}
complex ADD(int a,complex s2)
{
complex c;
c.real=a+s2.real;
c.img=s2.img;
return c;
}
complex ADD(complex s1,complex s2)
{
complex c;
c.real=s1.real+s2.real;
c.img=s1.img+s2.img;
return c; 
}
int main()
{
complex c1,c2,c3;
int a;
cout<<"Enter Real and Imaginary components of c1 :\n";
c1.read();
cout<<"Enter Real and Imaginary components of c2 :\n";
c2.read();
cout<<"Enter the integer to be added to c2: \n";
cin>>a;
c3=ADD(a,c2);
cout<<"After adding "<<a<<" to ";
c2.print();
cout<<"\nresult= ";
c3.print();
c3=ADD(c1,c2);
cout<<"\nAfter adding:\n";
c1.print();
cout<<" to ";
c2.print();
cout<<"\nresult= ";
c3.print();
cout<<"\n";
return 0;
}
