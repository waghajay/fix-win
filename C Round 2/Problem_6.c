/*
Statement: Print 5*2.
Expected Output: 10
*/

#include <stdio.h>
void mult(int a, int b) {
    return a * b;
}
int main() {
    printf("%d", mult(5, 2));
}
