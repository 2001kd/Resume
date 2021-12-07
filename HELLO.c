#include<windows.h>
main()
{
	COORD c;
	c.X=56;
	c.Y=14;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
	printf("HELLO");
	getch();
}
