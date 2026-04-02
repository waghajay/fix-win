/*
Statement: Marks between 0 and 100.
Expected Output: Invalid
*/

#include <stdio.h>
int main() {
    int marks = 105;
    if (marks > 0 && marks < 100) {
        printf("Valid");
    } else {
        printf("Invalid");
    }
}
