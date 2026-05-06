#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char input[1000];
    int tokens = 0, lines = 0;
    int inToken = 0;
    float density;
    float threshold = 5.0;
    int i;

    printf("Enter your code (type END to stop):\n");

    while (1) {
        fgets(input, sizeof(input), stdin);

        // Stop condition
        if (strncmp(input, "END", 3) == 0)
            break;

        lines++;

        for (i = 0; input[i] != '\0'; i++) {
            if (isalnum(input[i])) {
                if (!inToken) {
                    tokens++;
                    inToken = 1;
                }
            } else {
                inToken = 0;
            }
        }
    }

    // Avoid division by zero
    if (lines == 0) lines = 1;

    density = (float)tokens / lines;

    printf("\nTotal Tokens: %d\n", tokens);
    printf("Total Lines: %d\n", lines);
    printf("Token Density: %.2f\n", density);

    if (density > threshold)
        printf("Is_Token_Heavy: TRUE\n");
    else
        printf("Is_Token_Heavy: FALSE\n");

    return 0;
}
