#include <stdio.h>
int main() {

    int num, countkeep; // variable declaration

    printf("Enter the number: ");
    scanf("%d",&num);

    countkeep = digit(num);
    printf("Number of digits = %d", countkeep);


    return 0;
}

int digit(int num) {
    static int counter = 0; //static variable, which will keep the past value in the memory

    if(num > 0){
        counter++;
        return digit(num/10);
    } else {
        return counter;
    }
}
