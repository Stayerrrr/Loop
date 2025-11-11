#include <stdio.h>
#include <string.h>

enum StatusMahasiswa {
    CUTI = 1,
    AKTIF, 
    LULUS
};

int main() {
    int stat;
    long int  nim; 
    double ipk;
    char nama[50];

    printf("--- Pilih Status Mahasiswa ---\n");
    printf("1. Cuti\n2. Aktif\n3. Lulus\n");
    printf("Masukkan pilihan status (1-3): ");
    scanf("%d", &stat);
    

    while(getchar() != '\n'); // clear input buffer

    printf("Masukkan Nama: ");
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = 0; // remove newline

    printf("Masukkan NIM: ");
    scanf("%ld", &nim);

    printf("Masukkan IPK: ");
    scanf("%lf", &ipk);

    printf("\n");

    // Display info + logic based on status
    switch (stat) {
        case CUTI:
            printf("=== Data Mahasiswa CUTI ===\n");
            break;
        case AKTIF:
            printf("=== Data Mahasiswa AKTIF ===\n");
            break;
        case LULUS:
            printf("=== Data Mahasiswa LULUS ===\n");
            break;
        default:
            printf("Status tidak valid!\n");
            return 0;
    }

    printf("Nama : %s\nNIM  : %ld\nIPK  : %.2lf\n\n", nama, nim, ipk);

    if (stat == CUTI) {
        if(ipk < 2.0 ) {
           printf("Perhatian %s! IPK Anda rendah, manfaatkan masa cuti untuk memperbaiki.\n", nama);
        } else {
             printf("Semoga %s bisa kembali dengan semangat yang fresh!\n", nama);
        }
    }
    else if (stat == AKTIF) {
        if (ipk >= 3.5)
            printf("Selamat %s!! IPK Anda TERBAIK! Pertahankan!\n", nama);
        else if (ipk >= 3.0)
            printf("Bagus %s! IPK Anda BAIK, tetap semangat!\n", nama);
        else if (ipk >= 2.0)
            printf("Semangat %s! Anda bisa tingkatkan IPK lagi!\n", nama);
        else
            printf("%s, perlu perhatian khusus untuk meningkatkan IPK.\n", nama);
    }
    else if (stat == LULUS) {
        if (ipk >= 3.5)
            printf("SELAMAT %s! Lulus dengan PREDIKAT CUMLAUDE!\n", nama);
        else if (ipk >= 3.0)
            printf("Selamat %s! Lulus dengan PREDIKAT SANGAT MEMUASKAN!\n", nama);
        else
            printf("Selamat %s! Anda telah menyelesaikan studi!\n", nama);
    }
    else {
        printf("Input tidak valid, silahkan ulang dari awal");

        return 0;
    }

    printf("Alamat memori variabel ipk: %p\n", (void*)&ipk);
    printf("Nilai IPK via pointer: %0.2lf\n", *(&ipk));

    return 0;
}