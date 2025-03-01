// Print Fibonacci series

#include<stdio.h>
int main() {
    int n = 10;
    int prev = 0, curr = 1, next;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i ++)
    {
        printf("%d", prev);
        next = prev + curr;
        printf("%d", next);
    }
}