#include <stdio.h>
#include <stdlib.h>

int angka1, angka2;
float angka3, angka4, hasil1;
int pilihan;

void scan_integer(){
	
		printf (" masukkan pertama: ");
		scanf ("%d", &angka1);
		printf (" masukkan kedua: ");
		scanf ("%d", &angka2);
	}
	
void scan(){
	
		printf (" masukkan pertama: ");
		scanf ("%f", &angka3);
		printf (" masukkan kedua: ");
		scanf ("%f", &angka4);
	}
int main() {
	printf (" masukkan pilihan:1. tambah, 2. kurang, 3. kali, 4. bagi, 5. mod ");
	scanf ("%d", &pilihan);
	switch(pilihan){
		case 1 :
			scan();
			hasil1 = angka3 + angka4;
			break;
		case 2 :
			scan();
			hasil1 = angka3 - angka4;
			break;
		case 3 :
			scan();
			hasil1 = angka3 * angka4;
			break;
		case 4 :
			scan();
			hasil1 = angka3 / angka4;
			break;
		case 5 :
			scan_integer();
			hasil1 = angka1 % angka2;
			break;
		default :
			printf (" salah input");
	}
	printf (" hasilnya = %.1f", hasil1);
	main();
	return 0;
}
