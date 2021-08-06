#include <stdio.h>
main ()
{
	int i,n;
	printf("Program Pemfaktoran Bilangan Asli\n\n");
	printf("Masukkan Bilangan : "); scanf("%d",&n);
	i=0;
	while (i<=n) 
	{
		i++;
		
		if (n%i!=0) continue;
	
		printf("%d\n",i);	
		
	}
	return 0;
}
