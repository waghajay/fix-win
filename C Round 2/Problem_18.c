/*
Statement: Change val using pointer.
Expected Output: 20
*/

#include <stdio.h>
int main() {
    int val = 10;
    int *p = val;
    *p = 20;
    printf("%d", val);
}
