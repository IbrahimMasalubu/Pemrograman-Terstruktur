#include <stdio.h>

int main() {
    FILE *file = fopen("mahasiswa.txt", "a");
    if (file == NULL) {
        printf("Gagal membuka file untuk menambah data!\n");
        return 1;
    }

    char nama[100];

    printf("Masukkan nama mahasiswa yang ingin ditambahkan: ");
    scanf(" %[^\n]", nama);
    fprintf(file, "%s\n", nama);

    fclose(file);
    printf("Nama mahasiswa berhasil ditambahkan!\n");

    return 0;
}
