// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
    int row=1;
    int n;

    cin>>n;
    while(row<=n){
        int j=1;
        
        while(j<=n){
            char ch= 'A'+ row-1;
            cout<< ch;
            j=j+1;
        }
        cout<< endl;
        row=row+1;
    }

    return 0;
}

/*
op:
                AAAAA
                BBBBB
                CCCCC
                DDDDD
                EEEEE





*/