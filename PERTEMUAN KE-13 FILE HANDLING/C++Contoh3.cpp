#include <stdio.h>
int main() {
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        printf("Gagal Membuka File!\n");
        return 1;
    }
    fprintf (file, "Pekerjaan : Progammer\n");
    fclose(file);
    return 0;
}
