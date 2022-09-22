#include <stdio.h>
#include <stdlib.h>

int main(){
    int  n;
    float temp;
    
    float arr[]={1.6, 1.8, 2.7, 1.6, 2.3, 2.1, 0.19};
    n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%0.2f ", arr[i]);
    }
}
