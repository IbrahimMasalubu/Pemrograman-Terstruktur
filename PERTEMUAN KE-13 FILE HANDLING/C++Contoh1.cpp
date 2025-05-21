#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Gagal membuka file!\n");
        return 1;
    }
    fprintf(file, "Nama : Ibrahim Masalubu\nUmur : 19\nKelas : RPE\nJurusan : Teknik Informatika");
    fclose(file);
    return 0;
}
