#include<stdio.h>
#include<string.h>

int main()
{
	char rumah[100];
	char gembok;
	int num1=0,num2=0;
	
	// kita butuh scan string + spasi nya sebagai inputnya
	printf("Tolong sebutkan \"Rumah\" anda : ");
	scanf("%[^\n]", rumah);
	getchar();
	
	// sekarang kita butuh scan satu karakter saja
	printf("\nTolong sebutkan \"Gembok\" anda : ");
	scanf("%c", &gembok);
	getchar();
	
	if(strcmp(rumah, "sunib asloot")==0 && gembok=='Z')
	{
		printf("\nMasukan 2 Integer !\n");
		scanf("%d %d", &num1, &num2);
		
		printf("\n==============================\nSaya mau kasih tahu mas bahwa\n%d + %d = %d\n%d - %d = %d\n%d x %d = %d\n%d : %d = %d\n\n", num1, num2, num1+num2, num1, num2, num1-num2, num1, num2, num1*num2, num1, num2, num1/num2);
	}
	else if (strcmp(rumah, "sunib asloot")!=0 && gembok != 'Z') // jika kedua inputan salah
	{
		printf("Salah rumahnya gan\n");
		return 99;
	}
	else if (strcmp(rumah, "sunib asloot")!= 0) // jika inputan rumah salah
	{
		printf("Salah rumah gan\n");
		return 1;
	}
	else if (gembok != 'Z') // jika inputan gembok salah
	{
		printf("Salah gembok gan\n");
		return 2;
	}
	
	
	return 0;
}
