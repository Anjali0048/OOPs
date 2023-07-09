#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
char temp[20],name[20][20];
int i,j,n;
FILE *f;
f=fopen("sort.txt","w");
cout<<"\nEnter no. of names\n";
cin>>n;
cout<<"\nEnter "<<n<<" names\n";
for(i=0;i<n;i++)
{
cin>>name[i];
fprintf(f,"%s",name[i]);
}
fclose(f);
f=fopen("sort.txt","r");
if(f==NULL)
{
cout<<"\nFile doesnt exists\n";
return 0;
}
while(!feof(f))
{
fscanf(f,"%s",name[i]);
i++;
}
n=i-1;
cout<<"\nNames before sorting :\n";
for(i=0;i<n;i++)
cout<<name[i]<<" "<<endl;
cout<<"\nNames after sorting :\n";
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(strcmp(name[j],name[j+1])>0)
{
strcpy(temp,name[j]);
strcpy(name[j],name[j+1]);
strcpy(name[j+1],temp);
}
}
}
for(i=0;i<n;i++)
cout<<name[i]<<" "<<endl;
return 0;
}
