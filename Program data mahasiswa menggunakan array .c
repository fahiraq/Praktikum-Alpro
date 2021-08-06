//program data mahasiswa yang mengikuti responsi matkul Alpro
#include<stdio.h>
struct mhs{
	char nama[30],nim[30],jurusan[30];
}a[40];

int i,n;

main(){
	printf("Banyak Mahasiswa : ");scanf("%d",&n);
	for (i=0; i<=n-1; i++){
		printf("Mahasiswa ke-%d \n",i+1);
		printf("Nama\t : ");
		fflush(stdin);gets(a[i].nama);
		printf("NIM\t : ");gets(a[i].nim);
		printf("Jurusan\t : ");gets(a[i].jurusan);
	}
	printf("\n");
	printf("Data Mahasiswa yang Mengikuti Responsi\n");
	for (i=0; i<n; i++){
		printf("%d. ",i+1);
		printf("Nama %s ",a[i].nama);
		printf("(NIM %s) ",a[i].nim);
		printf("Jurusan %s \n",a[i].jurusan);
	}
	return 0;
}
