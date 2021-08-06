//tp no.7
//menghapus NIK penduduk pada data ktp file biner
#include<stdio.h>
int i;
int main(){
	FILE *f_struktur;
	FILE *f_struktur2;
	char dicari[50];
	struct{
		char nik[50],nama[50],ttl[100];
	}ktp;
	f_struktur=fopen("Data KTP.dat","rb");
	f_struktur2=fopen("Data KTP2.dat","wb");
	printf("===Input===\n");
	printf("Masukkan NIK Penduduk yang akan dihapus: ");gets(dicari);
	while (fread(&ktp,sizeof(ktp),1,f_struktur)==1)
	{
		if (strcmp(ktp.nik, dicari)!=0)
		{	
			fwrite(&ktp,sizeof(ktp),1,f_struktur2);		
		}
	}
	fclose(f_struktur);
	fclose(f_struktur2);
	remove("Data KTP.dat");
	rename("Data KTP2.dat","Data KTP.dat");
	printf("==Output==\n");
	f_struktur=fopen("Data KTP.dat","rb");
	while(fread(&ktp,sizeof(ktp),1,f_struktur)==1)
	{
		printf("-NIK  : %s\n", ktp.nik);
		printf(" Nama : %s\n", ktp.nama);
		printf(" TTL  : %s\n", ktp.ttl);
	}
	fclose(f_struktur);
	return 0;
}
