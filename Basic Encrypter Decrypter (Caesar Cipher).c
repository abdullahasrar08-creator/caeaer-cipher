#include <stdio.h>
int main() {
    char message[100];
    int choice;
    printf("=== Text Cipher Tool ===\n");
    printf("1. Encrypt Message\n");
    printf("2. Decrypt Message\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    printf("Enter a single-word message (A-Z or a-z only): ");
    scanf("%s", message);
    if (choice == 1) {
        for (int i = 0; message[i] != '\0'; i++) {
            message[i] = message[i] + 3;
        }
        printf("Encrypted message: %s\n", message);
    }
    else if (choice == 2) {
        for (int i = 0; message[i] != '\0'; i++) {
            message[i] = message[i] - 3;
        }
        printf("Decrypted message: %s\n", message);
    }
    else {
        printf("Invalid Choice!\n");
    }
    return 0;
}
