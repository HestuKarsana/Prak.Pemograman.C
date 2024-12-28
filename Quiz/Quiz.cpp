#include <stdio.h>
#include <unistd.h>

// Fungsi untuk menghitung rata-rata kekeruhan air
double hitungRataRata(int level[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += level[i];
    }
    return (double)total / size;
}

int main() {
    // Data level kekeruhan air
    int levelKekeruhan[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};
    int ukuran = sizeof(levelKekeruhan) / sizeof(levelKekeruhan[0]);

    // Variabel untuk rata-rata kekeruhan
    double rataRata = hitungRataRata(levelKekeruhan, ukuran);

    // Kecepatan motor dan waktu mencuci berdasarkan rata-rata
    int kecepatanMotor = 1000;
    int waktuMencuci = 60;

    printf("Mesin Cuci Otomasi dengan Sistem Fuzzy\n");
    printf("Tekan tombol Start (Enter) untuk memulai...\n");
    getchar();

    printf("Level Kekeruhan Air: ");
    for (int i = 0; i < ukuran; i++) {
        printf("%d ", levelKekeruhan[i]);
    }
    printf("\nRata-rata Kekeruhan Air: %.2f\n", rataRata);
    printf("Kecepatan Motor: %d rpm\n", kecepatanMotor);
    printf("Waktu Mencuci: %d menit\n", waktuMencuci);

    // Simulasi proses mencuci
    printf("\nProses dimulai:\n");

    // 1. Pengisian air (2 menit)
    printf("Mengisi air...\n");
    sleep(2);

    // 2. Deteksi kekeruhan
    printf("Mendeteksi level kekeruhan air...\n");
    sleep(1);

    // 3. Pencucian tahap pertama (setengah waktu)
    printf("Motor utama berputar dengan kecepatan %d rpm...\n", kecepatanMotor);
    sleep(waktuMencuci / 2);

    // 4. Pembuangan air kotor (2 menit)
    printf("Membuang air kotor...\n");
    sleep(2);

    // 5. Pengeringan cucian (3 menit)
    printf("Pengeringan cucian dengan kecepatan 2000 rpm...\n");
    sleep(3);

    // 6. Pengisian air kembali (2 menit)
    printf("Mengisi air kembali...\n");
    sleep(2);

    // 7. Pencucian tahap kedua (sisa waktu mencuci)
    printf("Motor utama berputar dengan kecepatan %d rpm...\n", kecepatanMotor);
    sleep(waktuMencuci / 2);

    // 8. Pembuangan air kotor (2 menit)
    printf("Membuang air kotor...\n");
    sleep(2);

    // 9. Pengeringan cucian terakhir (3 menit)
    printf("Pengeringan cucian terakhir dengan kecepatan 2000 rpm...\n");
    sleep(3);

    printf("Proses mencuci selesai!\n");

    return 0;
}
