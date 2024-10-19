#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

int get_integer(const char *message);
int factorial(int n);
int combination(int n, int r);

int main(void) {

    int n, r;

    n = get_integer("Enter the value of n: ");
    r = get_integer("Enter the value of r: ");

    int result = combination(n, r);

    printf("The result of C(%d, %d) is %d\n", n, r, result);

    return 0;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int factorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int get_integer(const char *message) {
    int value;
    printf("%s", message);
    scanf("%d", &value);
    return value;
}
