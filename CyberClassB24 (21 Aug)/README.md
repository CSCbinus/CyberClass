# RoadMap (C programming)

## Basic Concepts
1. What is C
```
C Programming Language :)
```

2. Hello, World!
```
printf("Hello World!");
```

3. Data Types

|name|bytes used|format|
|:---:|:---:|:---:|
|char|1|%c|
|int|2/4|%d|
|float|4(?)|%f|

```
special types (not really):
short vs long
signed vs unsigned
const

double???
boolean???
```

4. Input & Output

|Input|Output|
|:---:|:---:|
|getchar|putchar|
|gets|puts|
|scanf|printf|


5. Comments
```
//This is a line comment

/*
While this is a 
multi-line comment
*/
```

6. Operators
```
Arithmetic					: +, -, *, /, %
Assingment					: =
Augmented Assingment		: +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=
Bitwise Logic				: ~, &, |, ^
Bitwise Shifts				: <<, >>
Boolean Logic				: !, &&, ||
Conditional Evaluation		: ? :
Equality Testing			: ==, !=
Calling Function 			: ()
Increment and Decrement 	: ++, --
Member Selection			: ., ,(actual comma), ->
Object Size					: sizeof
Order Relations				: <, <=, >, >=
Reference and Dereference	: &, *, []
Sequencing					: ,
Subexpression Grouping		: ()
Type Conversion				: (typename)
```

## Conditionals and Loops
7. Conditionals
```
if(){

}
else if(){

}
else{

}
```

8. Nested if Statements
```
if(){
	if(){
		if(){

		}
	}
}
```

9. The switch Statement
```
switch(variable):
	case value:
		break
	case value:
		break
	default:
		break
```

10. The while Loop
```
while(){

}

do{

}while();
```

11. The for Loop
```
for(initialization, condition, counting){

}
```

## Functions, Arrays & Pointers

12. Functions

Functions is just a variable with conditions and returning what the expected function data type

```
int add(int num1, int num2){
	return num1+num2;
}

int main(){
	printf("%d\n", add(6,9));
}
```

int functions must return a int data type, and the fucntions caller must accept what the functions return with the corresponding data type, except void where it doesn't need a return value.

13. Recursive Functions

Functions calling another functions (could be itself)

```
int fibbonacci(int n){
	if(n <= 0){
		return 0;
	}
	else if(n == 1){
		return 1;
	}
	else{
		return (fibbonacci(n-1) + fibbonacci(n-2));
	}
}
```

14. Arrays

Want to store more than 1 value in a variable??? you can do it, thinks of it like an house in a complex. the value is the people inside and how you can call them is by knowing the house number.

```
int number[5] = {1,2,3,4,5};
printf("%d %d %d %d %d\n", number[0], number[1], number[2], number[3], number[4]);
```

15. Two-Dimensional Arrays

Same as a one-dimesional array but you need to know the block where the house is in

```
int number[5][5] = {
	{1,2,3,4,5},
	{6,7,8,9,10},
	{11,12,13,14,15},
	{16,17,18,19,20},
	{21,22,23,24,25},
};
printf("%d %d %d %d %d\n", number[0][0], number[0][1], number[0][2], number[0][3], number[0][4]);
printf("%d %d %d %d %d\n", number[1][0], number[1][1], number[1][2], number[1][3], number[1][4]);
printf("%d %d %d %d %d\n", number[2][0], number[2][1], number[2][2], number[2][3], number[2][4]);
printf("%d %d %d %d %d\n", number[3][0], number[3][1], number[3][2], number[3][3], number[3][4]);
printf("%d %d %d %d %d\n", number[4][0], number[4][1], number[4][2], number[4][3], number[4][4]);
```

16. Pointers

If variable is like a house, how if someone lives in the same house, and changing the interior of the house?

```
int num1 = 5;
int *num2 = &num1;
printf("%d %d\n", num1, *num2);

*num2 = 10;
printf("%d %d\n", num1, *num2);
```

## Strings & Functions Pointers

17. Strings

You already know about char and about array combine both of them and you get "array of char" (string)

18. String Functions

Some of string functions in string.h header:

	- strcat -> concatenate two strings
	- strchr -> string scanning operation
	- strcmp -> compare two strings
	- strcpy -> copy a string
	- strlen -> get string length
	- strncat -> concatetante one string with part of another
	- strncmp -> compare parts of two strings
	- strncpy -> copy part of a string
	- strrchr -> string scanning operation
	- strlwr -> convert to lower case
	- strrev -> return the string reversed
	- strupr -> convert to upper case


19. Functions Pointers

pointer pointed at a function

```
void test(int a){
	printf("Your number is %d\n", a);
}

int main(int argc, char **argv){
	void (*test_pointer)(int) = &test;
	(*test_pointer)(10);
}
```

20. Void Pointer

Think of void pointer is when you point a finger to someone (variable), you always use index finger right? well not always but most of the time you do, it's the same here it's just a generic pointer

```
int a = 7;
float b = 7.6;
void *p;
p = &a;
printf("Value of a = %d\n", *((int*)p));
p = &b;
printf("Value of b = %f\n", *((float*)p));
```

# To Be Continued
## Structures & Unions

21. Structures
22. Unions

## Memory Management

23. Malloc
24. Calloc
25. Realloc
26. Dynamic Strings & Arrays

## Files & Error Handling

27. Files
28. Binary File I/O
29. Error Handling
30. Error Codes
