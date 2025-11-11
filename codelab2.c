#include <stdio.h>

int main() {
    int many;
    double temp;
    int aman = 1; 
    
    printf("=== PROGRAM PEMANTAUAN SUHU MESIN ===\n");
    
    // How many do we need to check it chief?
    printf("Masukkan jumlah pengukuran yang akan dilakukan: ");
    scanf("%d", &many);
    
    printf("\n=== MULAI PEMANTAUAN ===\n");
    
    // Here goes nothing
    for (int i = 1; i <= many; i++) {
        while (1) { // stay here until input valid
            printf("Pengukuran ke-%d \n", i);
            printf("Masukkan suhu mesin: ");
            scanf("%lf", &temp);
            
            if (temp < 0) {
                printf("Data tidak valid! Mesin tidak mungkin dingin.\n");
                printf("Silakan input ulang.\n\n");
                continue; // you stuck in here boi, until you gave me correct input
            }

            break; // okay fine, you can go
        
        // Hot hot hot hot!
        if (temp >= 100) {
            printf("Suhu berbahaya! Mesin dimatikan.\n");
            aman = 0;  // the red flag if it's too hot
            break;  // stop the engine, or should i say stop the program
        }
        
        // Everything is normal, boring
        printf("Suhu normal: %.2lf°C\n\n", temp);
    }
    
}
 // our labor is done, good job people
    if (aman) {
        printf("Pemantauan selesai, semua suhu aman.\n");
    }

return 0;

}