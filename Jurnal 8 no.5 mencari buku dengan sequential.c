//Buatlah sebuah program pencarian buku untuk perpustakaan, dimana setiap buku memiliki judul, genre dan nomor rak
//Fitur pencarian digunakan untuk mencari judul buku
#include<stdio.h>
#include<string.h>
main(){
	struct{
		char judul[50],genre[50],rak[50];
	}a[50];
	int i,n,found=0;
	char cari[50];
	//Proses input data
	printf("Jumlah Buku: "); scanf("%d",&n); getchar();
	for(i=0;i<n;i++){
		printf("%d. Judul\t\t: ",i+1); gets(a[i].judul);
		printf("   Genre\t\t: "); gets(a[i].genre);
		printf("   rak\t\t: "); gets(a[i].rak);
	}
	//Proses searching
	printf("Buku yang dicari : "); gets(cari); //Lengkapi variabelnya
	i=0;
	while(i<n && strcmp(a[i].judul,cari)!=0){ //Lengkapi operasi boolean-nya
		i++;
	}
	if(strcmp(cari,a[i].judul)==0){ //Lengkapi operasi boolean-nya
		printf("%d. Judul\t\t: %s\n",i+1,a[i].judul); 
		printf("%d. Genre\t\t: %s\n",i+1,a[i].genre); 
		printf("%d. Rak\t\t: %s\n",i+1,a[i].rak); 
		} else{
		printf("Data tidak ditemukan");
	}
}


