#include <stdio.h>

int main() {
    char ch, key, encrypted, decrypted;

    // Input character and key
    printf("Enter a character to encrypt: ");
    scanf("%c", &ch);
    
    printf("Enter a key character: ");
    scanf("  %c", &key);

    // Encrypt the character using XOR
    encrypted = ch ^ key;
    printf("Encrypted character: %c\n", encrypted);

    // Decrypt the character using XOR
    decrypted = encrypted ^ key;
    printf("Decrypted character: %c\n", decrypted);
main();
    return 0;
}
