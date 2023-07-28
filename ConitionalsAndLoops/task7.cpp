//sum of even digits 
#include <iostream>
using namespace std;
int main() {
 int a;
 cout<< "enter the value" <<endl;
 cin>>a;
 int i=0;
 int sum=0;
 while(i<=a){
     sum=sum+i;
     
     i=i+2;
 }
 cout<< sum <<endl;

 
}