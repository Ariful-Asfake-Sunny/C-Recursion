#include <stdio.h>

int main() {
    int base, expo, result;

    printf("Enter the base value: ");
    scanf("%d", &base);

    printf("Enter the expo value: ");
    scanf("%d", &expo);

    result = power(base, expo);
    printf("%d to the power %d = %d", base, expo, result);

    return 0;

}


int power(int base, int expo) {
    if(expo == 0){
        return 1;
    } else {
        return base * power(base, expo-1);
    }
}
