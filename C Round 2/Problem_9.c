/*
Statement: Loop until i reaches 0.
Expected Output: 54321
*/

#include <stdio.h>
int main() {
    int i = 5;
    while (i > 0); {
        printf("%d", i);
        i--;
    }
}
