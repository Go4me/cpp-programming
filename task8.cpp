//prime or not checking
#include <iostream>
using namespace std;
int main() {
 int a;
 cout<< "enter the number" <<endl;
 cin>>a;
 int i=2;
 while(i<a){
     if(a%i==0){
         cout<< "not prime for" <<" " <<i <<endl;
         
     }
     else{
         cout<<"prime for" <<i <<endl;
     }
     i=i+1;

     
   
     
     
 }


 
}