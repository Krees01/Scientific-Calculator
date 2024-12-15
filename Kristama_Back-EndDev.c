#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double num1;
    double num2;
    int pilihan;

    printf("=============================================================================\n");
    printf("##   ##   ##    ##     ##   ##  ##  ##  ##       ##    ######   ####   #####  \n");
    printf("##  ##   ####   ##     ##  ##   ##  ##  ##      ####     ##    ##  ##  ##  ## \n");
    printf("## ##   ##  ##  ##     ## ##    ##  ##  ##     ##  ##    ##    ##  ##  ##  ## \n");
    printf("###     ######  ##     ###      ##  ##  ##     ######    ##    ##  ##  #####  \n");
    printf("## ##   ##  ##  ##     ## ##    ##  ##  ##     ##  ##    ##    ##  ##  ## ##  \n");
    printf("##  ##  ##  ##  ##     ##  ##   ##  ##  ##     ##  ##    ##    ##  ##  ##  ## \n");
    printf("##   ## ##  ##  ###### ##   ##  ######  ###### ##  ##    ##     ####   ##  ## \n");
    printf("=============================================================================\n");

    printf("\n");
    printf("Pilih cara penghitungan:\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Modulus\n");
    printf("6. Pangkat\n");
    printf("7. Akar Kuadrat\n");
    printf("8. Bangun Datar\n");
    printf("9. Keluar\n");
    printf("========================\n");
    printf("Masukkan pilihan (1-9): ");
    scanf("%d", &pilihan);

    if (pilihan == 1){
    printf("Masukkan angka pertama: ");
    scanf("%lf", &num1);
    printf("Masukkan angka kedua: ");
    scanf("%lf", &num2);
    printf("Hasil: %lf\n", num1 + num2);
    }

    if (pilihan == 2){
    printf("Masukkan angka pertama: ");
    scanf("%lf", &num1);
    printf("Masukkan angka kedua: ");
    scanf("%lf", &num2);
    printf("Hasil: %lf\n", num1 - num2);
    }

    if (pilihan == 3){
    printf("Masukkan angka pertama: ");
    scanf("%lf", &num1);
    printf("Masukkan angka kedua: ");
    scanf("%lf", &num2);
    printf("Hasil: %lf\n", num1 * num2);
    }

    if (pilihan == 4){
    printf("Masukkan angka pertama: ");
    scanf("%lf", &num1);
    printf("Masukkan angka kedua: ");
    scanf("%lf", &num2);
    printf("Hasil: %lf\n", num1 / num2);
    }

    if (pilihan == 5){
    int n1, n2;
    printf("Masukkan angka pertama: ");
    scanf("%lf", &num1);
    printf("Masukkan angka kedua: ");
    scanf("%lf", &num2);
    printf("Hasil: %d\n", n1 % n2);
    }

    if (pilihan == 6){
    printf("Masukkan angka pertama: ");
    scanf("%lf", &num1);
    printf("Masukkan pangkat: ");
    scanf("%lf", &num2);
    printf("Hasil: %lf\n", pow(num1,num2));
    }

    if (pilihan == 7){
    printf("Masukkan angka: ");
    scanf("%lf", &num1);
    if(num1 >= 0){
    printf("Hasil: %lf\n", sqrt(num1));
    }else{
    printf("Error, angka negatif tidak bisa di akar kuadrat\n");
    }
}
    if (pilihan == 8){
    int Pil, Pil2;
    printf("\n");
    printf("Pilih Bangun Datar:\n");
    printf("1. Persegi\n");
    printf("2. Persegi Panjang\n");
    printf("3. Jajar Genjang\n");
    printf("4. Segitiga\n");
    printf("5. Belah Ketupat\n");
    printf("6. Layang-Layang\n");
    printf("7. Trapesium\n");
    printf("8. Lingkaran\n");
    printf("9. Keluar\n");
    printf("========================\n");
    printf("Masukkan pilihan (1-9): ");
    scanf("%d", &Pil);
        if (Pil == 1){
        printf("Pilih Keliling Atau Luas:\n");
        printf("1. Keliling\n");
        printf("2. Luas\n");
        printf("========================\n");
        printf("Masukkan pilihan (1 atau 2): ");
        scanf("%d", &Pil2);
            if(Pil2 == 1){
                printf("Masukkan sisi: ");
                scanf ("%lf", &num1);
                printf("Keliling: %lf", 4*num1);
            }if(Pil2 == 2){
                printf("Masukkan sisi: ");
                scanf ("%lf", &num1);
                printf("Luas: %lf", num1*num1);
            }
        }
        if (Pil == 2){
        printf("Pilih Keliling Atau Luas:\n");
        printf("1. Keliling\n");
        printf("2. Luas\n");
        printf("========================\n");
        printf("Masukkan pilihan (1 atau 2): ");
        scanf("%d", &Pil2);
            if(Pil2 == 1){
                printf("Masukkan Panjang: ");
                scanf ("%lf", &num1);
                printf("Masukkan Lebar: ");
                scanf ("%lf", &num2);
                printf("Keliling: %lf", 2*(num1+num2));
            }if(Pil2 == 2){
                printf("Masukkan Panjang: ");
                scanf ("%lf", &num1);
                printf("Masukkan Lebar: ");
                scanf ("%lf", &num2);
                printf("Luas: %lf", num1*num2);
            }
        }
        if (Pil == 3){
        printf("Pilih Keliling Atau Luas:\n");
        printf("1. Keliling\n");
        printf("2. Luas\n");
        printf("========================\n");
        printf("Masukkan pilihan (1 atau 2): ");
        scanf("%d", &Pil2);
            if(Pil2 == 1){
            double A, B, C, D;
                printf("Masukkan Panjang 1: ");
                scanf ("%lf", &A);
                printf("Masukkan Panjang 2: ");
                scanf ("%lf", &B);
                printf("Masukkan Panjang 3: ");
                scanf ("%lf", &C);
                printf("Masukkan Panjang 4: ");
                scanf ("%lf", &D);
                printf("Keliling: %lf", A + B + C + D);
            }if(Pil2 == 2){
                printf("Masukkan Panjang Sisi: ");
                scanf ("%lf", &num1);
                printf("Masukkan Tinggi: ");
                scanf ("%lf", &num2);
                printf("Luas: %lf\n", num1*num2);
        }
        }
        if (Pil == 4){
        printf("Pilih Keliling Atau Luas:\n");
        printf("1. Keliling\n");
        printf("2. Luas\n");
        printf("========================\n");
        printf("Masukkan pilihan (1 atau 2): ");
        scanf("%d", &Pil2);
            if(Pil2 == 1){
            double A, B, C;
                printf("Masukkan Panjang 1: ");
                scanf ("%lf", &A);
                printf("Masukkan Panjang 2: ");
                scanf ("%lf", &B);
                printf("Masukkan Panjang 3: ");
                scanf ("%lf", &C);
                printf("Keliling: %lf\n", A + B + C);
            }if(Pil2 == 2){
                printf("Masukkan Panjang Sisi: ");
                scanf ("%lf", &num1);
                printf("Masukkan Tinggi: ");
                scanf ("%lf", &num2);
                printf("Luas: %lf", num1*num2/2);
        }
        }
        if (Pil == 5){
        printf("Pilih Keliling Atau Luas:\n");
        printf("1. Keliling\n");
        printf("2. Luas\n");
        printf("========================\n");
        printf("Masukkan pilihan (1 atau 2): ");
        scanf("%d", &Pil2);
            if(Pil2 == 1){
                printf("Masukkan sisi: ");
                scanf ("%lf", &num1);
                printf("Keliling: %lf", 4*num1);
            }if(Pil2 == 2){
                printf("Masukkan Diagonal 1: ");
                scanf ("%lf", &num1);
                printf("Masukkan Diagonal 2: ");
                scanf ("%lf", &num2);
                printf("Luas: %lf", num1*num2/2);
            }
        }
        if (Pil == 6){
        printf("Pilih Keliling Atau Luas:\n");
        printf("1. Keliling\n");
        printf("2. Luas\n");
        printf("========================\n");
        printf("Masukkan pilihan (1 atau 2): ");
        scanf("%d", &Pil2);
        if(Pil2 == 1){
            double A, B, C, D;
                printf("Masukkan Panjang 1: ");
                scanf ("%lf", &A);
                printf("Masukkan Panjang 2: ");
                scanf ("%lf", &B);
                printf("Masukkan Panjang 3: ");
                scanf ("%lf", &C);
                printf("Masukkan Panjang 4: ");
                scanf ("%lf", &D);
                printf("Keliling: %lf", A + B + C + D);
            }if(Pil2 == 2){
                printf("Masukkan Diagonal 1: ");
                scanf ("%lf", &num1);
                printf("Masukkan Diagonal 2: ");
                scanf ("%lf", &num2);
                printf("Luas: %lf\n", num1*num2/2);
        }
        }
        if (Pil == 7){
        printf("Pilih Keliling Atau Luas:\n");
        printf("1. Keliling\n");
        printf("2. Luas\n");
        printf("========================\n");
        printf("Masukkan pilihan (1 atau 2): ");
        scanf("%d", &Pil2);
        if(Pil2 == 1){
            double A, B, C, D;
                printf("Masukkan Panjang 1: ");
                scanf ("%lf", &A);
                printf("Masukkan Panjang 2: ");
                scanf ("%lf", &B);
                printf("Masukkan Panjang 3: ");
                scanf ("%lf", &C);
                printf("Masukkan Panjang 4: ");
                scanf ("%lf", &D);
                printf("Keliling: %lf", A + B + C + D);
            }if(Pil2 == 2){
                double T;
                printf("Masukkan Panjang Atas: ");
                scanf ("%lf", &num1);
                printf("Masukkan Panjang Bawah: ");
                scanf ("%lf", &num2);
                printf("Masukkan Tinggi: ");
                scanf ("%lf", &T);
                printf("Luas: %lf\n", num1*num2/2 * T);
        }
        }
        if (Pil == 8){
        double Pi = 22.0/7.0;
        printf("Pilih Keliling Atau Luas:\n");
        printf("1. Keliling\n");
        printf("2. Luas\n");
        printf("========================\n");
        printf("Masukkan pilihan (1 atau 2): ");
        scanf("%d", &Pil2);
            if(Pil2 == 1){
                printf("Masukkan jari-jari: ");
                scanf ("%lf", &num1);
                printf("Keliling: %lf", 2*Pi*num1);
            }if(Pil2 == 2){
                printf("Masukkan jari-jari: ");
                scanf ("%lf", &num1);
                printf("Luas: %lf", Pi*num1*num1);
            }
        }
        else if(Pil > 9  || Pil < 1){
        printf("Maaf tetapi pilihan anda tidak valid, silahkan mencoba lagi :<\n");
        }
    }
    else if (pilihan == 9){
    printf("Terima kasih dan selamat tinggal :>\n");
    }
    else if(pilihan > 9  || pilihan < 1){
    printf("Maaf tetapi pilihan anda tidak valid, silahkan mencoba lagi :<\n");
    }
    return 0;
}
