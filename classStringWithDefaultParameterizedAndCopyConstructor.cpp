#include<iostream>
#include<string>
using namespace std;
class strings
{
char *str;
public:
strings(){}
strings(char *s)
{
str=s;
}
void operator=(strings);
int operator==(strings);
strings operator+(strings);
friend ostream& operator<<(ostream&,strings);
};
void strings::operator=(strings s2)
{
int i=0;
while(s2.str[i]!='\0')
{
str[i]=s2.str[i];
i++;
}
str[i]='\0';
}
strings strings::operator+(strings s2)
{
int i=0,j=0;
while(str[i]!='\0')
i++;
while(s2.str[j]!='\0')
{
str[i]=s2.str[j];
i++;
j++;
}
str[i]='\0';
return *this;
}
int strings::operator==(strings s2)
{
int i=0;
while(str[i]!='\0'||s2.str[i]!='\0')
{
if(str[i]!=s2.str[i])
return(str[i]-s2.str[i]);
i++;
}
return 0;
}
ostream& operator<<(ostream& os,strings s)
{
cout<<s.str;
return os;
}
int main()
{
char str1[80],str2[80];
cout<<"\nEnter 2 strings:\n";
cin>>str1>>str2;
strings s1(str1),s2(str2);
strings t1(s1),t2=s2;
if((s1==s2)==0)
cout<<"\nStrings are equal\n";
else if((s1==s2)>0)
cout<<"\nString 1 is greater\n";
else
cout<<"\nString 2 is greater\n";
strings s3=s1+s2;
cout<<"\nAfter concatenation\n1st string= "<<s3<<"\n2nd string= "<<s2;
t1=t2;
cout<<"\nAfter copying\n1st string= "<<t1<<"\n2nd string= "<<t2<<"\n";
return 0;
}