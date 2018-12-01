#include<stdio.h>
int reverse()
{
	char c;
	//scanf("%c",&c);
	c = getchar();
	if(c!= EOF)
		reverse();
	printf("%c",c);
  	return 0;
}
int main()
{
	reverse();
	return 0;
}
