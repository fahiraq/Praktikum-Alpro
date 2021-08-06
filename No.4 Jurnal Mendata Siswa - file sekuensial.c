//Buatlah program yang memiliki opsi untuk mendata mahasiswa disebuah kelas dan menampilkan data yang telah di input menggunakan file sekuensial. 
//(Data : Nama, Nim, Kelas)
#include <stdio.h>
struct{
	char nama[50],nim[50],kelas[50];
}data;
int main (){
	int n,i;
	FILE *list;
	FILE *temp;
	printf("Pilih Opsi : \n1.Input Data \n2.Output Data \n3. Menghapus Data \n ");scanf("%d",&n);
	switch (n){
		case 1 : {
			printf("Input data\n");
			list=fopen("siswa.dat","ab"); 
			printf("Banyak data yang diinput: "); scanf("%d",&n); getchar();
			for(i=1;i<=n;i++)
			{
			printf("%d. Nama\t: ",i); gets(data.nama);
			printf("   NIM\t: ");gets(data.nim);
			printf("   Kelas: ");gets(data.kelas);
			fwrite(&data, sizeof(data), 1, list);
			}
			fclose(list);
			break;
		}
		case 2 : {
			printf("Output data\n");
			list=fopen("siswa.dat","rb");
			while(fread(&data,sizeof(data),1,list)==1){
			printf("%d. Nama\t: %s\n",i,data.nama); 
			printf("   NIM\t: %s\n",data.nim);
			printf("   Kelas: %s\n",data.kelas);
			i++;
		}
			fclose(list); //Lengkapi sintaks untuk menutup fil
			break;
		}
		case 3 : {
			char cari[50];
			printf("Menghapus Data\n");
			printf("Masukkan nama yang akan dihapus : ");gets(cari);
			list = fopen("siswa.dat","rb");
			temp = fopen("temp.dat","wb");
			while(fread(&data,sizeof(data),1,list)==1){
				if(strcmp(cari,data.nama)!=0){
					fwrite(&cari,sizeof(data),1,temp);
				}
			}
			fclose(list);
			fclose(temp);
			remove("siswa.dat");
			rename("temp.dat","siswa.dat");
			break;
		}
	}
}
