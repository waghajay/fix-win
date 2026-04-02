/*
Statement: Exchange values of a and b.
Expected Output: a=10 b=5
*/

#include <stdio.h>
int main() {
    int a = 5, b = 10;
    a = b;
    b = a;
    printf("a=%d b=%d", a, b);
    return 0;
}
