#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
bool sorted (int arr[] , int a){
    if(a == 0 || a == 1 ){
        return true ;
    }
    
    if(arr[0] > arr[1]){
        return false ;
    }else{
        bool ans = sorted(arr + 1 , a - 1);
        return ans ;
    }
}

int main() {
    
    int arr[] = {4,5,6,7,10,9} ;
    if(sorted(arr , 6 )){
        cout << "true" ;
    }else {
        cout << "false" ;
    }
    return 0 ;
}
