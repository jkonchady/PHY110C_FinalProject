#include<iostream>
#include<math.h>

using std::endl;
using std::cout;
using std::cin;

bool is_prime(int n){   //Function to determine if a number is prime or not
    if(n>2){
        for(int i=2; i<=int(n/2); i++){
            if(n%i==0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    //cout << is_prime(27) << endl;
    int l=10000;
    int arr[l] = {};
    int nums[500]={};
    int i=0,j=2;
    while(i<l){     //populate the array with the first 10000 prime numbers
        if(is_prime(j)){
            arr[i]=j;
            i++;
        }
        j++;
    }

    cout << "p,q,n_even" << endl;
    for(int k=1; k<=2500; k++){     //loop to generate all possible prime combinations for even numbers from 4 to 5000
        int curr=k*2;
        for(int m=0; m<l; m++){
            for(int n=m; n<l; n++){
                if(arr[n]+arr[m]==curr){
                    cout << arr[m] <<','<<arr[n]<<','<<curr<<endl; 
                }
            }
        }
    }    


}