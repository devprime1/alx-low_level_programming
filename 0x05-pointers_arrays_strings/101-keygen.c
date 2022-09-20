#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void crack(int len)
{
	srand(time(NULL));
	int result;
	char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/\|";
	for (int i =0; i <= len; i++)
	{
		result = list[rand() % (sizeof list -1)];
	}
return (result);
}
