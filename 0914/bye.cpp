#include <stdio.h>
int main() 
{
	char c;
	printf("���ڿ� �Է� > ");
	scanf("%s", &c);
	
	while (1) 
	{
		if (c == '\n') {
			break;
		}
		printf("���ڿ� �Է� > ");
		scanf("%s", &c);
	} 
			printf("���ڿ� �Է� > ");
	return 0;
}
