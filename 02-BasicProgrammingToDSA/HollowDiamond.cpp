#include <iostream>
using namespace std;

int main(){

    int num;
    cin>>num;

    for(int i = 0 ; i < num ; i++){
        for(int j = 0 ; j < 2*num-1 ; j++){
            if((i + j)== num - 1 || (j - i) == num - 1 || i == num-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

   


    return 0;

}