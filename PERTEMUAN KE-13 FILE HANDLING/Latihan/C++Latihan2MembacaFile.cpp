#include <stdio.h>

int main() {
    FILE *file = fopen("mahasiswa.txt", "r");
    if (file == NULL) {
        printf("File tidak ditemukan!\n");
        return 1;
    }

    char buffer[100];

    printf("Daftar Nama Mahasiswa:\n");
    while (fgets(buffer, 100, file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);
    return 0;
}
