#include<bits/stdc++.h>
using namespace std;
 template<class x > void sort(x *a,int size)
 { 
 x t;
 for(int i=0;i<size;i++)
 for(int j=(size-1);j>=i;j--)
 {
 if(a[j-1]>a[j])
 {
 t=a[j-1];
a[j-1]=a[j];
 a[j]=t;
 }
 }
 }
 int main()
 {
 int i,n;
cout<<"enter integer array size\n";
cin>>n;
int p[n];
cout<<"Enter "<<n<<" integer array elements\n";
for(i=0;i<n;i++)
cin>>p[i];
 cout<<"Actual integer array before sorting is:\n";
 for(i=0;i<n;i++)
 cout<<p[i]<<" ";
 cout<<"\n";
 sort(p,n);
 cout<<"Sorted Integer array is:\n";
 
for(i=0;i<n;i++)
 cout<<p[i]<<" ";
 cout<<"\n";
char q[n];
 cout<<"Enter "<<n<<" character array elements\n";
 for(i=0;i<n;i++)
 {cin>>q[i];}
 cout<<"Actual character array before sorting is:\n";
 for(i=0;i<n;i++)
 cout<<q[i]<<" ";
 cout<<"\n";
 sort(q,n);
 cout<<"Sorted character array is:\n";
 for(i=0;i<n;i++)
 cout<<q[i]<<" ";
 cout<<"\n";
float r[n];
 cout<<"Enter "<<n<<" float array elements\n";
 for(i=0;i<n;i++)
 cin>>r[i];
 cout<<"Actual float array before sorting is:\n";
 for(i=0;i<n;i++)
 cout<<r[i]<<" ";
 cout<<"\n";
 sort(r,n);
 cout<<"Sorted float array is:\n";
 for(i=0;i<n;i++)
 cout<<r[i]<<" ";
 cout<<"\n";
return 0;
 }