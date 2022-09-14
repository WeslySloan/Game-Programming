#include <stdio.h>
int main() 
{
	char c;
	printf("문자열 입력 > ");
	scanf("%s", &c);
	
	while (1) 
	{
		if (c == '\n') {
			break;
		}
		printf("문자열 입력 > ");
		scanf("%s", &c);
	} 
			printf("문자열 입력 > ");
	return 0;
}
