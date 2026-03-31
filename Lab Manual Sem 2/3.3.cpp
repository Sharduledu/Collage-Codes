#include<iostream>
#include<iomanip>
using namespace std;
int main(){
float a,b,c;
cout<<"Enter two numbers : ";
cin>>a>>b;
c=a+b;
cout<<a<<" + "<<b<<" = "<< fixed <<c<<endl;
cout<<a<<" + "<<b<<" = "<< scientific <<c<<endl;
cout<<a<<" + "<<b<<" = "<< setprecision(4) <<c<<endl;

return 0;
}
