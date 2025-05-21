#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("File tidak ditemukan!\n");
        return 1;
    }
    char buffer[100];
    while (fgets(buffer, 100, file) != NULL) {
    }
    fclose(file);
    return 0;
}
