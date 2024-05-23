#include <stdio.h>
#include <math.h>

int main(){  
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);        
    }
    
    for(int i = 0; i < n; i++){
        int check = 1;
        for(int m = 0; m < i; m++){
            if(a[m] == a[i]){
                check = 0;
                break;
            }
        }
        if(check == 1){
            printf("%d ", a[i]);
        }
    } 
    return 0;
}