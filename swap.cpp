#include<iostream>
using namespace std;
template<class t>void swv(t a,t b)
{
cout<<"\nBefore swap(in function) a = "<<a<<" & b = "<<b<<"\n";
t x;
x=a;
a=b;
b=x;
cout<<"\nAfter swap(in function) a = "<<a<<" & b = "<<b<<"\n";
}
template<class t,class w>void swp(t *a,w *b)
{
cout<<"\nBefore swap (in function) a = "<<*a<<" & b = "<<*b<<"\n";
t y;
y=*a;
*a=*b;
*b=y;
cout<<"\nAfter swap (in function) a = "<<*a<<" & b "<<*b<<"\n";
}
int main()
{
int a,b;
float x,y;
char m,n;
cout<<"\nEnter two integers\n";
cin>>a>>b;
swv(a,b);
cout<<"\nAfter swap a & b(in main)\n"<<"a: "<<a<<"\nb: "<<b;
swp(&a,&b);
cout<<"\nAfter swap a & b(in main)\n"<<"a: "<<a<<"\nb: "<<b;
cout<<"\nEnter two float nos.\n";
cin>>x>>y;
swv(x,y);
cout<<"\nAfter swap a & b(in main)\n"<<"a: "<<x<<"\nb: "<<y;
swp(&x,&y);
cout<<"\nAfter swap a & b(in main)\n"<<"a: "<<x<<"\nb: "<<y;
cout<<"\nEnter two char \n";
cin>>m>>n;
swv(m,n);
cout<<"\nAfter swap a & b(in main)\n"<<"a: "<<m<<"\nb: "<<n;
swp(&m,&n);
cout<<"\nAfter swap a & b(in main)\n"<<"a: "<<m<<"\nb: "<<n;
return 0;
}
