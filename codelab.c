#include <stdio.h>

int main() {
    double harga, total = 0, diskon = 0, discout = 0, after;
    int iterate = 1;
    
    printf("=== MENGHITUNG TOTAL BELANJA ===\n");
    printf("Masukkan harga barang (0 atau negatif untuk berhenti):\n");
    
    //Iteration GO!
    while (1) {
        printf("Harga barang ke-%d: Rp ", iterate);

        // exception handling for user that can't read
        if (scanf("%lf", &harga) != 1) {
            printf("Tolong masukkan angka saja ya mas mbak yang pintar \n");
            while (getchar() != '\n');   // throw the error input
            continue;
        }

        if (harga <= 0) break;  // stop if it's 0 or negative, why would they put negative anyway?
        iterate++;
        total += harga;
    }
    
   // Count the discount if it's 2m or less. other than that, they are broke
    if (total > 2000000) {
        discout = 50;
        diskon = total * 0.50;
    } else if (total > 1000000) {
        discout = 35;
        diskon = total * 0.35;
    } else if (total > 500000) {
        discout = 10;
        diskon = total * 0.10;
    } 
    
    // Count the total
    after = total - diskon;
    
    // The holy output
    printf("\n=== RINCIAN BELANJA ===\n");
    printf("Total harga sebelum diskon: Rp %.2lf\n", total);
    
    if (discout == 0) {
        printf("Tidak ada diskon \n");
    } else if (discout == 10) {
        printf("Diskon (10%%): Rp %.2lf\n", diskon);
    } else if (discout == 35) {
        printf("Diskon (35%%): Rp %.2lf\n", diskon);
    } else if (discout == 50) {
        printf("Diskon (50%%): Rp %.2lf\n", diskon);
    }
    
    printf("Total harga setelah diskon: Rp %.2lf\n", after);
    
    return 0;
}