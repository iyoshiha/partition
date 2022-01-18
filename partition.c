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

void	swap_ary_elem(int *a_ptr, int *b_ptr)
{
	int	tmp;

	tmp = *a_ptr;
	*a_ptr = *b_ptr;
	*b_ptr = tmp;
}

int	partition(int *ary, size_t p, size_t r)
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
		}
		index.j++;
	}
	return (index.i);
}

int	main(int c, char **v)
{
	int ary[c - 1];
	int border;

	c--;
	v++;
	for (int i = 0; i < c; i++)
	{
		ary[i] = atoi(v[i]);
	}
	border = partition(ary, 0, c - 1);
	for (int i = 0; i < border; i++)
	{
		printf("%d", ary[i]);
		printf(" ");
	}
	printf("[%d] ", ary[border]);
	for (int i = border + 1; i < c - 1; i++)
	{
		printf("%d", ary[i]);
		printf(" ");
	}
	printf("%d", ary[c - 1]);
	return (0);
}
