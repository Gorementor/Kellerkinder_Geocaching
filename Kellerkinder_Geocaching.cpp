#include <stdio.h>
#include <conio.h>

int main(void) {
	int bar;
	int bazz[87] = { 108, 118, 136, 53, 126, 136, 137, 53, 121, 126, 122, 53,
				 86, 131, 137, 140, 132, 135, 137, 53, 118, 138, 123, 53,
				 121, 126, 122, 53, 91, 135, 118, 124, 122, 53, 131, 118,
				 120, 125, 53, 121, 122, 130, 53, 129, 122, 119, 122, 131,
				 65, 53, 121, 122, 130, 53, 106, 131, 126, 139, 122, 135,
				 136, 138, 130, 53, 138, 131, 121, 53, 121, 122, 130, 53,
				 124, 118, 131, 143, 122, 131, 53, 103, 122, 136, 137, 84,
				 31, 83, 53 };
	int foo[24] = { 100, 10, 31, 30, 10, 26, 30, 4, 28, 18, 27, 10, 111, 10, 26,
				   27, 24, 10, 26, 28, 4, 30, 27, 31 };
	for (bar = 0; bar < 0x57; bar++)
		printf("%c", (0x1 * 0x2 * 0x2 * bazz[bar] - 0x54) / 0x4);
	int gak;
	scanf_s("%d", &gak);
	printf("> ");
	for (bar = 0; bar < 0x18; bar++)
		printf("%c", foo[bar] ^ gak);
	_getch();
}