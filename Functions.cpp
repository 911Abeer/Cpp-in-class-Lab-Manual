#include <iostream>
using namespace std;

int add(int x, int y){
return x+y;
}

int sub(int x, int y){
return x-y;
}

int mul(int x, int y){
return x*y;
}

int divs(int x, int y){
return x/y;
}

int main(){
int a;    
cout<<"Enter first number"<<endl;
cin>>a;
int b;
cout<<"Enter second number"<<endl;
cin>>b;

int sum = add(a,b);
int diff = sub(a,b);
int prd = mul(a,b);
int quo = divs(a,b);

cout<<"Sum = "<< sum <<endl;
cout<<"Difference = "<<diff<<endl;
cout<<"Product = "<<prd<<endl;
cout<<"Quotient = "<<quo<<endl;
   
return 0;
}
