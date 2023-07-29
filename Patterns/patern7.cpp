// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int row=1;
    
    while(row<=n){
        int col=1;
        int count=row;
        while(col<=row){
            cout<< count;
            count=count+1;
            col=col+1;
        }
        cout<< endl;
        row=row+1;
    }


    return 0;
}


//op:   1
//      23
//      345
//      4567