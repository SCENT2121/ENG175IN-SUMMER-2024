#include <stdio.h>

int main() {
    int nums[5];
    printf("Enter 5 numbers separated by spaces: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Numbers in reverse order:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", nums[i]);
    }
    return 0;
}