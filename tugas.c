#include <stdio.h>
#include <string.h>

enum StatusMahasiswa {
    KELUAR = 0,
    CUTI = 1,
    AKTIF,
    LULUS
};

int main() {
    int stat, jumlah, i;
    long int nim;
    double ipk;
    char nama[50];

    while (1) {
        printf("\n=== MENU STATUS MAHASISWA ===\n");
        printf("0. Keluar\n1. Cuti\n2. Aktif\n3. Lulus\n");
        printf("Pilih status mahasiswa (0-3): ");
        scanf("%d", &stat);
        while (getchar() != '\n'); // bersihin input buffer

        if (stat == KELUAR) {
            printf("\nProgram selesai. Bye!\n");
            break;
        }

        if (stat < 1 || stat > 3) {
            printf("Pilihan tidak valid!\n");
            continue;
        }

        printf("Berapa mahasiswa untuk status ini? ");
        scanf("%d", &jumlah);
        while (getchar() != '\n');

        for (i = 1; i <= jumlah; i++) {
            printf("\n Data Mahasiswa ke-%d \n", i);

            printf("Masukkan Nama: ");
            fgets(nama, sizeof(nama), stdin);
            nama[strcspn(nama, "\n")] = 0;

            printf("Masukkan NIM: ");
            scanf("%ld", &nim);

            printf("Masukkan IPK: ");
            scanf("%lf", &ipk);
            while (getchar() != '\n');

            printf("\n");

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
            }

            printf("Nama : %s\nNIM  : %ld\nIPK  : %.2lf\n\n", nama, nim, ipk);

            if (stat == CUTI) {
                if(ipk < 2.0)
                    printf("Perhatian %s! IPK rendah, manfaatkan cuti untuk comeback.\n", nama);
                else
                    printf("%s, semoga balik kuliah lebih fresh\n", nama);
            }
            else if (stat == AKTIF) {
                if (ipk >= 3.5)
                    printf("GG %s! IPK Cumlaude, unstoppable.\n", nama);
                else if (ipk >= 3.0)
                    printf("Mantap %s! IPK aman, stabil!.\n", nama);
                else if (ipk >= 2.0)
                    printf("Semangat %s! Masih bisa naik nih.\n", nama);
                else
                    printf("%s, IPK critical, time to grind \n", nama);
            }
            else if (stat == LULUS) {
                if (ipk >= 3.5)
                    printf("SELAMAT %s! Lulus CUMLAUDE!!\n", nama);
                else if (ipk >= 3.0)
                    printf("Selamat %s! Predikat sangat memuaskan! \n", nama);
                else
                    printf("Selamat %s! Yang penting wisuda! \n", nama);
            }

            printf("Alamat memori variabel ipk: %p\n", (void*)&ipk);
            printf("Nilai IPK via pointer      : %.2lf\n", *(&ipk));
        }
    }

    return 0;
}
