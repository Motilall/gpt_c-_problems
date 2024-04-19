#include<iostream>
using namespace std;
int main(){
    int i,a,total;
    cout<<"Enter a numnber" << endl;
    cin>> a;
    for(i = 1; i<=a; i++){
        if(i % 2 == 0){
            cout << i << endl;
        }
    }

    return 0;
}