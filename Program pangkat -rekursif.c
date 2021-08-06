//program perpangkatan menggunakan Algoritma Rekursif!
#include <stdio.h>
int pangkat(int a, int b){
	if (b==0){
		return 1;
	}
	else{
		return a*pangkat(a,b-1);
	}
}
main (){
	int a,b;
	int hasil;
	printf("Angka Basis : ");scanf("%d",&a);
	printf("Pangkat : ");scanf("%d",&b);
	hasil=pangkat(a,b);
	printf("Hasil = %d",hasil);
	return 0;
}

