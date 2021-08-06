//Program menginputkan string dan mengoutputkan nya
//File Teks
#include <stdio.h>
char string[255];
int main(){
	FILE *f_teks;
	f_teks = fopen("contoh.txt","w");
	printf("===Input===\n");
	printf("Masukkan String : ");gets(string);
	fprintf(f_teks, "%s\n" , string);
	fclose (f_teks);
	
	printf("\n");
	printf("===Output===\n");
	f_teks = fopen("contoh.txt", "r");
	while (fgets(string, sizeof(string), f_teks) != NULL)
	printf("%s",string);
	fclose (f_teks);
	return 0;
}
