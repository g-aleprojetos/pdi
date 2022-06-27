
#include <stdio.h> 
int serie = 100;

void f3(char hello[]) {

	printf("%p\n", &hello);
	if (serie > 0) {
		serie--;
		f3(hello);
	}

}

int main()
{
	char hello[] = "Hello World";
	printf("from main: %p\n", &hello);

	f3(hello);

	return 0;

}

