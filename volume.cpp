#include <stdio.h>

void balok();
void bola();
//void limas();
//void prisma();
void tabung();

int pilihan;
float volume, luas, a, b, c, d;
int main(){
   
    printf("Pilih bangun ruang:\n\n1.Balok\n2.Bola\n3.Limas segitiga sama sisi\n4.Prisma segitiga\n5.Tabung\n\nPilihan : ");
    scanf("%d",&pilihan);
    switch (pilihan)
    {
        case 1:
            balok();
            break;
        case 2:
            bola();
            break;
        case 3:
           // limas();
            break;
        case 4:
           // prisma();
            break;
        case 5:
            tabung();
            break;
    }
}


void limas(){
}
void balok(){
    printf("Masukkan panjang balok : ");
    scanf("%f",&a);
    printf("Masukkan lebar balok : ");
    scanf("%f",&b);
    printf("Masukkan tinggi balok :");
    scanf("%f",&c);
    volume=a*b*c;
    luas=2*(a*b+a*c+b*c);
    printf("\nVolume Balok : %.2f satuan\n",volume);
    printf("Luas permukaan Balok : %.2f satuan",luas);
}

void bola(){
    printf("Masukkan panjang jari jari bola :");
    scanf("%.2f",&a);
    volume = 4/3*3.14*a*a*a;
    luas = 4*3.14*a*a;
    printf("\nVolume Bola : %.2f satuan\n",volume);
    printf("Luas permukaan Bola : %.2f satuan",luas);
}

void tabung(){
    printf("Masukkan panjang jari jari tabung : ");
    scanf("%f",&a);
    printf("Masukkan tinggi tabung : ");
    scanf("%f",&b);
    volume = 3.14*b*a*a;
    luas = 2*3.14*a*a;
    printf("\n Volume Tabung : %.2f satuan\n",volume);
    printf("Luas permukaan Tabung %.2f satuan\n",luas);
}
