// to check whether the character is uppercase or lowercase or any numerical value
#include <iostream>
using namespace std;
int main() {
 char ch;
 cout<< "enter the value" <<endl;
 cin>>ch;
 int ascii = int(ch);
 if(ascii>=97 && ascii<=122 ){
     cout<< "ch is a character with lowercase";
 }
 else if(ascii>=65 && ascii<=95){
     cout<< "ch is uppercase character";
 }
 else if(ascii>=48 && ascii<=57){
     cout<< "ch is a numeric";
 }
 
}