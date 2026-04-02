/*
Statement: Is 5 in [1, 5, 2]? print "Found".
Expected Output: Found
*/

#include <stdio.h>
int main() {
    int a[3] = {1, 5, 2};
    for (int i = 0; i < 3; i++) {
        if (a[i] == 5)
            printf("Found");
            break;
    }
}
