#include <stdio.h>

int fatorial(int n){

    if(n==0){
        return 1;
    }else{
        return n*fatorial(n-1);
    }
}

int main(void){

    printf("\nEstou de Volta\n");
    int res =0;
    for (int c1 = 0; c1 < 10; c1++)
    {
        res = fatorial(c1);
        printf("x = %i\n: c1 = %i\n,",c1, res);
    }
    
    return 0;
}