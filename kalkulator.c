#include <stdio.h>

int main() {
    int pilih;
    int uang_masuk, modal, biaya;
    int harga, jumlah, persen;
    double hasil;

    printf("=== KALKULATOR TOKO ===\n");
    printf("1. Untung Bersih (-)\n");
    printf("2. Total Borongan (*)\n");
    printf("3. Persen (%%)\n");

    printf("Pilih: ");
    scanf("%d", &pilih);

    if (pilih == 1) {
        printf("Uang Masuk: ");
        scanf("%d", &uang_masuk);

        printf("Modal barang: ");
        scanf("%d", &modal);

        printf("Biaya toko: ");
        scanf("%d", &biaya);

        hasil = uang_masuk - modal - biaya;
        printf("Untung bersih: %d\n", hasil);

    } else if (pilih == 2) {
        printf("Harga satuan: ");
        scanf("%d", &harga);

        printf("Jumlah barang: ");
        scanf("%d", &jumlah);

        hasil = harga * jumlah;
        printf("Total harga: %.0f\n", hasil);

    } else if (pilih == 3) {
        printf("Harga: ");
        scanf("%d", &harga);

        printf("Persen: ");
        scanf("%d", &persen);

        hasil = (double)harga * persen / 100;
        printf("Hasil persen: %.2f\n", hasil);

    } else {
        printf("Pilihan tidak tersedia\n");
    }

    return 0;
}
