#include "libft.h"
// #define DEBUG
#include "debug.h"
#define SIZE 10

typedef struct	s_partition
{
	int	i;
	int	j;
	int x;
}				t_partition;

void	swap_ary_elem(char *a_ptr, char *b_ptr)
{
	int	tmp;

	tmp = *a_ptr;
	puts("~~~~~~~~~~~~~~~~~~~~~~");
	puts("");
		printf("in swap a: %d ", *a_ptr);
	puts("");
		printf("in swap b: %d ", *b_ptr);
	puts("");
	//*a_ptr = *a_ptr ^ *b_ptr;
	*a_ptr = *b_ptr;
		printf("in swap a: %d ", *a_ptr);
	puts("");
	//*b_ptr = *a_ptr ^ *b_ptr;
	*b_ptr = tmp;
		printf("in swap b: %d ", *b_ptr);
	puts("");
//	*a_ptr = *a_ptr ^ *b_ptr;
	//	printf("in swap a: %d ", *a_ptr);
	puts("");
	puts("~~~~~~~~~~~~~~~~~~~~~~");
}

int	partition(char *ary, size_t p, size_t r)
{
	t_partition index;
	int			pivot;

	index.i = (int)p - 1;
		printf("i: %d\n", index.i);
	index.j = p;
		printf("p: %d\n", index.j);
	pivot = ary[r];
		printf("pivot: %d\n", pivot);
	for (int i = 0; i <= r ; i++)
	{
		printf("%d ", ary[i]);
	}
	puts("");
	puts("in par() all elem done...");
	while (index.j <= r)
	{
		if (ary[index.j] <= pivot)
		{
			index.i++;
			printf("swap a: %d\n", ary[index.i]);
			printf("swap b: %d\n", ary[index.j]);
			swap_ary_elem(ary + index.i, ary + index.j);
		}
		index.j++;
		puts("j++..");
		puts("check ary elem...");
	for (int i = 0; i <= r ; i++)
	{
		printf("%d ", ary[i]);
	}
		puts("done ...");
	}
	return (index.i);
}

int	main(int c, char **v)
{
	char ary[c - 1];
	printf("%d\n\n", c);

	c--;
	v++;
//  = {5,1,0,2,3,9,8,7,6,4};
	for (int i = 0; i < c; i++)
	{
		ary[i] = atoi(v[i]);
	}
	puts("atoi done");
	puts("checking elem in ary...");
	for (int i = 0; i < c; i++)
	{
		printf("%d ", ary[i]);
	}
	puts("");
	puts("all elem done...");
	partition(ary, 0, c - 1);
	puts("~~~~partition~~~~");
	for (int i = 0; i < c; i++)
	{
		printf("%d ", ary[i]);
	}
	return (0);
}
