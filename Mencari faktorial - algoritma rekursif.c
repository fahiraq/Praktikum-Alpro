//contoh penggunaan algoritma rekursif untuk mencari nilai faktorial
#include <stdio.h>
int nFaktorial(int n);
int x, hasil;

int main(){
printf("FUNGSI FAKTORIAL\n");
printf("Silahkan masukkan angka: ");
scanf("%d",&x); getchar();
hasil = nFaktorial(x);
printf("Hasil faktorial: %d", hasil);
return 0;
}

int nFaktorial(int n){
if (n==1 || n==0){
return 1;
}	 
else if (n>1) {
return n * nFaktorialf(n-1);
}
}
