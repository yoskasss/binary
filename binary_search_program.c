#include <stdio.h>

// Dizi elemanlarını küçükten büyüğe sıralayan bir fonksiyon (Bubble Sort)
void sirala(int dizi[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (dizi[j] > dizi[j + 1]) {
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }
}

// Binary Search (İkili Arama) Fonksiyonu
int binarySearch(int dizi[], int n, int aranan) {
    int sol = 0, sag = n - 1, orta;

    while (sol <= sag) {
        orta = (sol + sag) / 2;

        if (dizi[orta] == aranan) {
            return orta; // Eleman bulundu, dizideki indisini döndür
        } else if (dizi[orta] < aranan) {
            sol = orta + 1; // Sağ tarafa geç
        } else {
            sag = orta - 1; // Sol tarafa geç
        }
    }

    return -1; // Eleman bulunamadı
}

int main() {
    int n;

    printf("Kaç sayı gireceksiniz? ");
    scanf("%d", &n);

    int dizi[n];

    // Kullanıcıdan dizi elemanlarını alma
    printf("Lütfen %d sayı girin:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d. sayı: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    // Diziyi sıralama
    sirala(dizi, n);

    // Sıralı diziyi ekrana yazdırma
    printf("Sıralı dizi: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    // Kullanıcıdan aranacak elemanı alma
    int aranan;
    printf("Aramak istediğiniz sayıyı girin: ");
    scanf("%d", &aranan);

    // Binary Search ile arama
    int sonuc = binarySearch(dizi, n, aranan);

    if (sonuc != -1) {
        printf("Sayı %d, dizinin %d. indeksinde bulundu.\n", aranan, sonuc);
    } else {
        printf("Sayı bulunamadı.\n");
    }

    return 0;
}
