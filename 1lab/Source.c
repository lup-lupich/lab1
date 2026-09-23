#include <stdio.h>
#include <locale.h>
void name()
{
	setlocale(LC_CTYPE, "RUS");
	puts("*******************************************");
	puts("*                                         *");
	puts("* тема: Разработка консольного приложения *");
	puts("*       Выполнил Лупачев С.С.             *");
	puts("*                                         *");
	puts("*******************************************");

}

void date()
{
	puts("   __      __      __  __ ");
	puts("| |__|   |   |    |  |   |");
	puts("|   /    |  /_    |__|   |");

}

void main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("Нажми Enter для продолжения...");
	getchar();

	name();
	date();

	return 0;
}