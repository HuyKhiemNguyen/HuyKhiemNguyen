#include <stdio.h>
#include <math.h>

int prime_number(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)  return 0;
    }
    return n > 1;
}

int main(){  
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);        
    }
    
    for(int i = 0; i < n; i++){
        if(prime_number(a[i])){
            printf("%d ", a[i]);
        }
    }
    
    return 0;
}