#include<iostream>
using namespace std;
class divide
{
int a,b;
public:
void compute()
{
cout<<"\nEnter two integers \n";
cin>>a>>b;
try
{
if(b!=0)
cout<<a/b<<"\n";
else
throw b;
}
catch(...)
{
cout<<"\nDivision by zero(error) \n";
}
}
};
class neg
{
int a;
public:
void scan()
{
cout<<"\nEnter age \n";
cin>>a;
try
{
if(a>=0)
cout<<"\nAge of the person is "<<a<<" \n";
else
throw a;
}
catch(...)
{
cout<<"\nPlease enter positive value for age \n";
}
}
};
int main()
{
int c;
divide d;
neg n;
while(1)
{
cout<<"1.divide integers 2.enter age 3.exit \n";
cin>>c;
switch(c)
{
case 1:d.compute();
break;
case 2:n.scan();
break;
default:return 0;
}
}
return 0;
}