#include <stdio.h>

int main(){  
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);        
    }
    int chan = 0, le = 0, tc = 0, tl = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            ++chan;
            tc += a[i];
        }
        else{
            ++le;
            tl += a[i];
        }
    }
    
    printf("%d\n%d\n%d\n%d", chan, le, tc, tl);

    return 0;
}