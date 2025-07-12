#include <stdio.h>
#include <string.h>

void runLengthEncode(char *input) {
    int length = strlen(input);
    for (int i = 0; i < length; ) {
        char currentChar = input[i];
        int count = 1;

        // Count occurrences of the current character
        while ((i + count < length) && (input[i + count] == currentChar)) {
            count++;
        }

        // Print encoded part
        printf("%c%d", currentChar, count);

        // Move to the next new character
        i += count;
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string to compress: ");
    scanf("%s", str);

    printf("Compressed string using RLE: ");
    runLengthEncode(str);

    return 0;
}
