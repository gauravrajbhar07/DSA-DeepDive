#include <iostream>
#include <cmath>
using namespace std;

int DecimalToBinary(int n){
    //Division Methods
   
    int binaryNumber= 0 ;
    int i = 0 ;

    while(n > 0){
        int bit = (n & 1);  //get the access to the first bit 

        binaryNumber = bit*pow(10,i) +  binaryNumber;
        n = n >> 1;  
        i++; 
    }

    return binaryNumber;
}


int main(){

    int n;
    cin>>n;
    int binary = DecimalToBinary(n);
    cout<<binary;


    return 0;
}