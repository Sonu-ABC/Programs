#include <stdio.h>

int main() {
    char source[] = "Hello, World!"; // Source string
    char destination[50]; // Destination string array
    int i;
    printf("%s\n",source);

    // Copy each character from source to destination
    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0'; // Add null terminator at the end

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
