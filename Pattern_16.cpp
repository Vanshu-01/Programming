#include <iostream>
using namespace std;
int main(){
    int row=1,n;
    cin>>n;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<char(row+col-2+'A')<<" ";
            col++;
        }
        row++;
        cout<<"\n";

    }
}