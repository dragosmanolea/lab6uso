#include <stdio.h>

#define N 5

int check_if_prime(int n)
{
    int i;
 
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
 
    return 1;
}
 
int main(void)
{
    int n;
    n = N;
    printf("Please gimme a number: ");
    scanf("%d", &n);
 
    if (check_if_prime(n)) {
        printf("%d is prime\n", n);
    } else {
        printf("%d is not prime\n", n);
    }
 
    return 0;
}
