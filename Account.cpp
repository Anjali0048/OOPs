#include<iostream>
#include<fstream>
using namespace std;
struct bank
{
char name[20];
double bal;
long acc;
};
int main()
{
int n,i;
cout<<"Enter no. of entries \n";
cin>>n;
struct bank b[n];
ofstream op("bank.txt",ios::out);
if(!op)
{
cout<<"Cannot open file \n";
return 1;
}
for(i=0;i<n;i++)
{
cout<<"enter a/c no.,name & bal of customer : "<<i+1<<"\n";
cin>>b[i].acc>>b[i].name>>b[i].bal;
op.write((char *)&b[i],sizeof(struct bank));
}
op.close();
ifstream ip("bank.txt",ios::in);
if(!ip)
{
cout<<"File doesn't exists \n";
return 1;
}
for(i=0;i<n;i++)
{
if(ip)
{
ip.read((char *)&b[i],sizeof(struct bank));
cout<<"A/c no : "<<b[i].acc<<"\n";
cout<<"Name : "<<b[i].name<<"\n";
cout<<"Balance (in INR) : "<<b[i].bal<<"\n";
}
}
ip.close();
return 0;
}
