#include <stdio.h>

int main() {
    FILE *file = fopen("mahasiswa.txt", "w");
    if (file == NULL) {
        printf("Gagal membuka file untuk menulis!\n");
        return 1;
    }
    char nama[100];
    int jumlah;
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlah);
    for (int i = 0; i < jumlah; i++) {
        printf("Masukkan nama mahasiswa %d: ", i + 1);
        scanf(" %[^\n]", nama);
        fprintf(file, "%s\n", nama);
    }
    fclose(file);
    printf("Data mahasiswa berhasil disimpan!\n");
    return 0;
}
