//Deret Aritmatika
//rekursif
#include<stdio.h>
int arit(int n);
int x, hasil,b,i,temp,a;
int main(){
    printf("FUNGSI DERET GEOMETRI\
");
    printf("Silahkan masukkan panjang deret : ");
    scanf("%d",&x); getchar();
    printf("Masukan Beda : "); scanf("%d",&b); getchar();
    printf("Deret : ");
    hasil = arit(x);
    printf("\
Total : %d", hasil);
    return 0;
}

int arit(int n){
    if(n>0){
        a=a+b;
        printf("%d ",a);
        temp=temp+a;
        n=n-1;
        arit(n);
    }
    return temp;
}
