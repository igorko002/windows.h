#include <stdio.h>
#include <Windows.h>

int main() {

	char program[40];
	int sleep;

	printf("List command \n date \n color a-z \n cmd \n pause \n notepad (and other program) \n shutdown /s (off PC) \n ");
	printf("Write the process you want perform: ");
	fgets(program, sizeof(program), stdin);
	printf("Write the sleep period: ");
	scanf_s("%d", &sleep);
	Sleep(sleep);
	printf("\nYour open: %s", program);
	system(program);

	return 0;
}