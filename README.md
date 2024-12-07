# Binary Search ile Dizi Sıralama ve Arama

Bu proje, C programlama dilinde kullanıcıdan alınan sayıların sıralanmasını ve ardından bir sayı üzerinde **Binary Search** (ikili arama) algoritması kullanarak arama yapmayı içerir.

## 📋 Özellikler
- Kullanıcıdan dizi elemanlarını alır.
- Girilen elemanları küçükten büyüğe sıralar.
- Kullanıcının belirttiği bir elemanı **Binary Search** yöntemiyle dizide arar.
- Eleman bulunduysa indeksini, bulunamadıysa hata mesajını gösterir.

## 🚀 Çalıştırma

### 1. Projeyi Derleme
Programı çalıştırmak için aşağıdaki adımları izleyebilirsiniz:

#### Windows:
1. **GCC ile derleme:**
   ```bash
   gcc -o binary_search_program binary_search_program.c
##### Çalıştırma:

    binary_search_program

#### Linux/MacOS:

  GCC ile derleme:
```bash
gcc -o binary_search_program binary_search_program.c
```
##### Çalıştırma:

    ./binary_search_program

#### 2. Kullanım

    Kaç sayı gireceğinizi belirtin.
    Girilen sayıları ekrana yazdırın ve sıralı diziyi görün.
    Aramak istediğiniz sayıyı girin.
    Program, sayının bulunduğu indeksi veya bulunamadığı bilgisini ekrana yazdırır.

## 📄 Kod Hakkında
### Fonksiyonlar



   sirala(int dizi[], int n):
      Diziyi küçükten büyüğe sıralar.
       Kullanılan algoritma: Bubble Sort.
        
   binarySearch(int dizi[], int n, int aranan):
      Binary Search algoritması ile dizide eleman arar.
       Eleman bulunursa, indeksini döndürür.
       Bulunamazsa -1 döner.

### Kod Yapısı

   Kullanıcıdan alınan sayı dizisi sıralanır.
   Sıralanan dizide kullanıcı tarafından girilen eleman aranır.
   Sonuç ekrana yazdırılır.
