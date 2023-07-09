#include<iostream>
using namespace std;
class comp
{
int r,i;
public:
void scan()
{
cout<<"Enter real & imaginary part of complex no. \n";
cin>>r>>i;
}
void sd()
{
if(i<0)
cout<<"complex no. is "<<r<<i<<"i \n";
else
cout<<"complex no. is "<<r<<"+"<<i<<"i \n";
}
comp operator+(comp x);
comp operator-(comp x);
friend comp operator++(comp &a);
friend comp operator+(int a,comp &x);
friend comp operator+(comp &x,int b);
comp operator=(comp p);
};
comp comp::operator+(comp x)
{
comp a;
a.r=x.r+r;
a.i=x.i+i;
return a;
}
comp comp::operator-(comp x)
{
comp b;
b.r=r-x.r;
b.i=i-x.i;
return b;
}
comp operator++(comp &a)
{
a.r++;
return a;
}
comp operator+(int a,comp &x)
{
// comp p;
x.r=a+x.r;
// return p;
}
comp operator+(comp &x,int b)
{
x.r=x.r+b;
// return q;
}
comp comp::operator=(comp p)
{
r=p.r;
i=p.i;
return *this;
}
int main()
{
comp a,b,c;
int x;
a.scan();
b.scan();
a.sd();
b.sd();
cout<<"Adding two complex no's \n";
(a+b).sd();
cout<<"Subtracting two complex no's \n";
(a-b).sd();
c=a;
cout<<"Assign obj a to obj c \n";
c.sd();
operator++(a);
cout<<"After incrementing real part of a \n";
a.sd();
cout<<"enter an integer \n";
cin>>x;
cout<<"Adding integer to complex no. \n";
operator+(x,a);
a.sd();
operator+(c,x);
c.sd();
return 0;
}
