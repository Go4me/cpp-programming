//sum of digits using while loop
#include <iostream>
using namespace std;
int main() {
 int a;
 cout<< "enter the value" <<endl;
 cin>>a;
 int i=1;
 int sum=0;
 while(i<=a){
     sum=sum+i;
     cout<< sum <<endl;
     i=i+1;
 }

 
}