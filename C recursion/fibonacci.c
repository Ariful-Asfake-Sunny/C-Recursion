#include <stdio.h>

int main() {
    int i, n;
    printf("enter the term: ");
    scanf("%d", &n);

    for(i=0; i<=n; i++){
        printf("%d \n", fibocanni(i));
    }

}


int fibocanni(int n) {
    if(n == 0){
        return 0;
    }
    else if(n == 1) { //(n == 1 || n == 2)
        return 1;
    }
    else {
        return (fibocanni(n-1) + fibocanni(n-2));
    }
}
