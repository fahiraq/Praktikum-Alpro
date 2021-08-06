//Deret Geometri
//Rekursif
#include<stdio.h>
int geo(int n);
int x, hasil,r,i,temp,a=1;
int main(){
    printf("FUNGSI DERET GEOMETRI\
");
    printf("Silahkan masukkan panjang deret : ");
    scanf("%d",&x); getchar();
    printf("Masukan Rasio : "); scanf("%d",&r); getchar();
    printf("Deret : ");
    hasil = geo(x);
    printf("\nTotal : %d", hasil);
    return 0;
}

int geo(int n){
    if(n>0){
        a=a*r;
        printf("%d ",a);
        temp=temp+a;
        n=n-1;
        geo(n);
    }
    return temp;
}
