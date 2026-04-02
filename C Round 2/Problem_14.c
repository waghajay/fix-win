/*
Statement: Count letters in "ABC".
Expected Output: 3
*/

#include <stdio.h>
int main() {
    char s[] = "ABC";
    int count = 0;
    while (s[count] != 0) {
        count++;
    }
    printf("%d", count);
}
