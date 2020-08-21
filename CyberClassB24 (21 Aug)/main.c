#include <stdio.h>

#define PHI 3.17

int main()
{
	// print hello world (1 baris)
	printf("Hello\\'1234'\"halo\"world\n\n");
	
	/*
	ini 
	komentar
	banyak
	baris
	*/
	
	// variable -> tempat penampung sementara u/ suatu nilai
	// Tipe data
	// angka bulat-> int (3)
	// angka koma -> float (3.5)
	// karakter -> char
	
	// deklarasi variable
	int angka;
	float angka_koma = 5.2;
	// inisiasi
	angka=5;
	
	// 1 byte = 8 bit
	// 4 byte = 8*4 = 32 (0-31)
	// 2**31 = 2 milyar sekian
	
	int x = 0xABCDE;
	printf("size of int: %d\n", sizeof(int));
	printf("Variable angka: %d\n", angka);
	printf("Address variable angka: 0x%x\n", &angka);
	printf("hexa: 0x%08x\n", x);
	printf("variable angka_koma: %d\n\n", (int)angka_koma);
	
	int var_input;
	printf("Masukan anga: ");
	scanf("%d", &var_input);
	// getchar -> buka tutup toilet
	// fflush(stdin) -> flush toilet
//	getchar();
	fflush(stdin);
	printf("Input user: %d\n", var_input);
	
	char var_input_char;
	printf("Masukan karakter: ");
	scanf("%c", &var_input_char);
	printf("Isi variable: %c\n", var_input_char);
	
	// 'string' -> array of character (size 1 byte)
	//  0x12345  0x12346   0x12347 -> analogi (sebenernya sampe 9)
	// |        |        |        |	  
	char var_string[10];
	printf("Masukan string: ");
	// var_string = &var_string = &var_string[0] -> ngambil memori 0x12345
	scanf("%s", var_string);
	fflush(stdin);
	printf("Isi kalimat: %c\n", var_string[1]);
	
	char a[] = "budi pergi kepasar"; // 1 byte
	char b = "a"; // 2 byte -> "a\0"
	
	printf("char1: %s\n", a);
	printf("char2: %c\n", b);
	
	printf("Hasil: %c\n", 65);
	
	
	return 0;
}
