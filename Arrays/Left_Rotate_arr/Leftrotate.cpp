#include<iostream>
using namespace std;


int main(){
    int n = 5;
    int arr[n] = {10,34,42,53,12};

    int temp = arr[0];
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    return 0;   
}       