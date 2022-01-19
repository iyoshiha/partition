#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int *ary;
	int border;
	int len;
	int index;

	scanf("%d", &len);
	index = len -1;
	ary = malloc(sizeof(int) * len);
	for (int i = 0; i < len; i++)
		scanf("%d", &ary[i]);
	border = partition(ary, 0, index);
	for (int i = 0; i < border; i++)
	{
		printf("%d", ary[i]);
		printf(" ");
	}
	printf("[%d] ", ary[border]);
	for (int i = border + 1; i < index; i++)
	{
		printf("%d", ary[i]);
		printf(" ");
	}
	printf("%d", ary[index]);
	puts("");
	return (0);
}
