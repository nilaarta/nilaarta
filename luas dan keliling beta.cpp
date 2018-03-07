#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
float hasil, hasil1, a, b, c, d, luas, keliling;
int pilihan;
void scan(){
		printf (" masukkan panjang: ");
		scanf ("%d", &a);
		printf (" masukkan lebar: ");
		scanf ("%d", &b);
	}
void scan_persegipanjang(){
		printf (" masukkan panjang: ");
		scanf ("%f", &a);
		printf (" masukkan lebar: ");
		scanf ("%f", &b);
	}	
void scan_segitigasembarang(){
		printf (" masukkan sisi1: ");
		scanf ("%f", &a);
		printf (" masukkan sisi2: ");
		scanf ("%f", &b);
		printf("masukkan sisi3: ");
		scanf("%f", &c);
	}
void scan_lingkaran(){
		printf (" masukkan jari-jari: ");
		scanf ("%f", &a);
	}
void scan_trapesium(){
		printf (" masukkan sisi sejajar pendek: ");
		scanf ("%f", &a);
		printf (" masukkan sisi sejajar panjang: ");
		scanf ("%f", &b);
		printf (" masukkan sisi kiri: ");
		scanf ("%f", &c);
		printf (" masukkan sisi kanan: ");
		scanf ("%f", &d);
	}
void scan_jajargenjang(){
		printf (" masukkan sisi sejajar: ");
		scanf ("%f", &a);
		printf (" masukkan sisi miring: ");
		scanf ("%f", &b);
		printf (" masukkan tinggi: ");
		scanf ("%f", &c);
	}	

float keliling_persegipanjang(float a, float b){   
     int keliling;  
	 keliling = 2* (a+b);         
     return(keliling);  
   }
float luas_persegipanjang(float a, float b){   
     int luas;  
     luas = a * b; 
     return(luas);  
   }   
float keliling_segitigasembarang(float a, float b, float c){   
     int keliling;  
	 keliling = a + b + c;      
     return(keliling);  
   }
float luas_segitigasembarang(float a, float b, float c){   
    int luas, s, e;  
    s = keliling / 2;
	e = s*(s-a)*(s-b)*(s-c);
	luas = sqrt(e);
     return(luas);     
	}
float keliling_lingkaran(float a){   
     int keliling;  
	keliling = 3.14 * (2*a);        
     return(keliling);  
   }
float luas_lingkaran(float a){   
     int luas;  
    luas = 3.14 * a * a;
     return(luas);  
   }
float keliling_trapesium(float a, float b, float c, float d){   
     int keliling;  
	 keliling = a + b+ c+ d;      
     return(keliling);  
   }
float luas_trapesium(float a, float b, float c, float d){   
    int luas;
	int pendek, tinggi, tinggi1;  
    pendek = (b-a)/2;
    tinggi = (c*c)-(pendek*pendek);
    tinggi1 = sqrt(tinggi);
    luas = (a+b)*tinggi1/2;
    return(luas);     
	}
float keliling_jajargenjang(float a, float b){   
     int keliling;  
	 keliling = 2* (a+b);         
     return(keliling);  
   }
float luas_jajargenjang(float a, float c){   
     int luas;  
     luas = a * c; 
     return(luas);  
   }   
   
int main() {
	printf (" masukkan pilihan:\n\t1. persegi panjang, \n\t2. segitiga sembarang, \n\t3. lingkaran,\n\t4. trapesium, \n\t5. jajargenjang \n");
	scanf ("%d", &pilihan);
	switch(pilihan){
		case 1 :
			scan_persegipanjang();
			luas = luas_persegipanjang(a,b);
			keliling = keliling_persegipanjang(a,b);
			break;
		case 2 :
			scan_segitigasembarang();
			keliling=keliling_segitigasembarang(a,b,c);
			luas=luas_segitigasembarang(a,b,c);
			break;
		case 3 :
			scan_lingkaran();
			keliling =keliling_lingkaran(a);
			luas=luas_lingkaran(a);
			break;
		case 4 :
			int t, op;
			scan_trapesium();
			keliling = keliling_trapesium(a, b, c, d);
			luas = luas_trapesium(a, b, c, d);
			break;
		case 5 :
			scan_jajargenjang();
			keliling= keliling_jajargenjang(a, b);
			luas= luas_jajargenjang(a, c);
			break;
		default :
			printf (" salah input");
	}
	printf (" luasnya = %.1f", luas);
	printf (" kelilingnya = %.1f", keliling);
	return 0;
}
