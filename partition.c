#include "libft.h"
#define DEBUG
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
	*a_ptr = *a_ptr ^ *b_ptr;
	*b_ptr = *a_ptr ^ *b_ptr;
	*a_ptr = *a_ptr ^ *b_ptr;
}

int	partition(char *ary, size_t p, size_t r)
{
	t_partition index;
	int			pivot;

	index.i = (int)p - 1;
	index.j = p;
	pivot = ary[r];
	while (index.j <= r)
	{
		if (ary[index.j] <= pivot)
		{
			index.i++;
			swap_ary_elem(ary + index.i, ary + index.j);
			PF("%d %d \n", ary[index.i], ary[index.j]);
		}
		index.j++;
	}
	return (index.i);
}

int	main()
{
	
	char ary[SIZE] = {5,1,0,2,3,9,8,7,6,4};
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", ary[i]);
	}
	puts("");
	partition(ary, 0, SIZE);
	puts("~~~~partition~~~~");
	/*
		for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", ary[i]);
	}
	*/

	return (0);
}
