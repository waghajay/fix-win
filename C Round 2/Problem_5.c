/*
Statement: Print [0] [1] [2].
Expected Output: 10 20 30
*/

#include <stdio.h>
int main() {
    int arr[3] = {10, 20, 30};
    for (int i = 1; i <= 3; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
