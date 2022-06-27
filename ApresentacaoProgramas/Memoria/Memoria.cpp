//Pasagem por valor
#include <stdio.h>; 

void f2(char hello[]) {
	printf("from f2: %p\n", &hello);
	printf("%s\n", hello);

}

void f1(char hello[]) {
	printf("from f1: %p\n", &hello);
	f2(hello);
}

int main()
{
	char hello[] = "Hello World";
	//Em C a anotação & mostra onde a variavel está locada na memória
	printf("from main: %p\n", &hello);
	f1(hello);

	return 0;

}
