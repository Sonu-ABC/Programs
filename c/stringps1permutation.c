#include <stdio.h>
#include <string.h>

// Function to swap characters
void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Function to generate permutations
void permute(char *str, int left, int right) {
    int i;
    if (left == right)
        printf("%s\n", str);
    else {
        for (i = left; i <= right; i++) {
            swap((str + left), (str + i));
            permute(str, left + 1, right);
            swap((str + left), (str + i)); // backtrack
        }
    }
}

int main() {
    char str[] = "ABC"; // Input string
    int n = strlen(str);
    permute(str, 0, n - 1);
    return 0;
}
