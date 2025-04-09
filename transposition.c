#include <stdio.h>
#include <string.h>
void encrypt(char message[], int key) {
 int length = strlen(message);
 char encrypted[length + 1];
 for (int i = 0; i < key; i++) {
 for (int j = i; j < length; j += key) {
 printf("%c", message[j]);
 }
 }
  printf("\n");
}
void decrypt(char message[], int key) {
 int length = strlen(message);
 int rows = (length + key - 1) / key;
 char decrypted[length + 1];
 for (int i = 0; i < rows; i++) {
 for (int j = i; j < length; j += rows) {
 printf("%c", message[j]);
 }
 }
 printf("\n");
}
int main() {
 char message[100];
 int key;
 printf("Enter the message: ");
 fgets(message, sizeof(message), stdin);
 message[strcspn(message, "\n")] = 0; //Remove newline character
 printf("Enter the key: ");
 scanf("%d", &key);
 printf("Encrypted message: ");
 encrypt(message, key);
 printf("Decrypted message: ");
 decrypt(message, key);
 return 0;
}
