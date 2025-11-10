#include <stdio.h>

int main() {
    int jumlah_pengukuran;
    double suhu;
    int semua_aman = 1;  // flag untuk menandai apakah semua suhu aman
    
    printf("=== PROGRAM PEMANTAUAN SUHU MESIN ===\n");
    
    // Minta input jumlah pengukuran
    printf("Masukkan jumlah pengukuran yang akan dilakukan: ");
    scanf("%d", &jumlah_pengukuran);
    
    printf("\n=== MULAI PEMANTAUAN ===\n");
    
    // Loop untuk setiap pengukuran
    for (int i = 1; i <= jumlah_pengukuran; i++) {
        printf("Pengukuran ke-%d \n", i);
        printf("Masukkan suhu mesin: ");
        scanf("%lf", &suhu);
        
        // Cek jika suhu < 0°C (data tidak valid)
        if (suhu < 0) {
            printf("Data tidak valid! Suhu tidak boleh negatif.\n\n");
            continue;  // Lewati iterasi ini
        }
        
        // Cek jika suhu ≥ 100°C (berbahaya)
        if (suhu >= 100) {
            printf("Suhu berbahaya! Mesin dimatikan.\n");
            semua_aman = 0;  // Set flag bahwa ada suhu berbahaya
            break;  // Hentikan perulangan
        }
        
        // Jika suhu normal (0 ≤ suhu < 100)
        printf("Suhu normal: %.2lf°C\n\n", suhu);
    }
    
    // Tampilkan pesan akhir berdasarkan kondisi
    if (semua_aman) {
        printf("Pemantauan selesai, semua suhu aman.\n");
    }
    
    return 0;
}