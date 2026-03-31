#include<iostream>
#include<iomanip>
using namespace std;

void divide1(int a ,int b );
void divide2(int a);
void divide3(float a ,float b ,float c);

int main(){
int n1 , n2;
int n3;
float n5,n6,n4;

cout<<"Enter 2 Numbers : "<<endl;
cin>>n1>>n2;
divide1(n1,n2);

cout<<"Enter 1 Numbers : "<<endl;
cin>>n3;
divide2(n3);

cout<<"Enter 3 Numbers : "<<endl;
cin>>n4>>n5>>n6;
divide3(n4,n5,n6);

return 0;
}

void divide1(int a , int b){
if (a%b == 0){
    cout<<"The number is divisible"<<endl;
    }
if (a%b != 0){
    cout<<"The number is not divisible"<<endl;
    }
}

void divide2(int a){
int flag=1;
for(int i = 2;i<=(a-1);i++){
    if (a%i==0){
        flag =0;
        break;
        }
}
    if(flag==0)
        cout<<"The number is not  Prime"<<endl;
    else if (flag==1)
        cout<<"The number is Prime"<<endl;

}


void divide3(float a,float b,float c){
float S;
S=(a+b+c)/3;
cout<<"The average of the 3 numbers is : "<<S<<endl;
}
