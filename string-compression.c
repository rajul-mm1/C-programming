#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compress(char *str) {
    int len = strlen(str);
    char *compressed = (char *) malloc(len * 2 * sizeof(char)); // allocate memory for compressed string
    int compressed_len = 0; // current length of compressed string
    int count = 1; // count of consecutive characters
    char current = str[0]; // current character being counted
    
    for (int i = 1; i < len; i++) {
        if (str[i] == current) {
            count++;
        } else {
            // append compressed count and character to compressed string
            compressed[compressed_len++] = current;
            compressed_len += sprintf(&compressed[compressed_len], "%d", count);
            // reset count and update current character
            count = 1;
            current = str[i];
        }
    }
    // append last compressed count and character to compressed string
    compressed[compressed_len++] = current;
    compressed_len += sprintf(&compressed[compressed_len], "%d", count);
    compressed[compressed_len] = '\0'; // add null terminator
    
    printf("Compressed string: %s\n", compressed);
    free(compressed); // free memory
}

int main() {
    char str[] = "aaabbccd";
    compress(str);
   return 0;
}