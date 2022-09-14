#include <stdio.h>
#include <windows.h>
void gotoxy(int x, int y);
int main(void)
{
	for(int i=1;i<=9;i++)
	{	
		gotoxy(10, 2+i);
		for (int k=1; k<=9; k++) 
		{
				printf("%d*%d=%2d  ", k, i, k*i);
		}
	}

	printf("\n");
	return 0;
}

void gotoxy(int x, int y)
{
	COORD Pos = {x - 1, y - 1};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}


