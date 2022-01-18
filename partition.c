#include "libft.h"

#define SIZE 10

typedef struct	s_partition;
{
	int x;
	int	i;
	int	j;
}				t_partition;

int	partition(char *ary, size_t p, size_t r)
{
	t_partition index;

	index.i = p - 1;
	index.j = p;
	index.x = ary[r];
	while (index.j < r)
	{
		if ()
		

	}
	ary[r] = ary[i];
	ary[i] = x;


	return ();
}

int	main()
{
	
	char ary[SIZE] = {5,1,0,2,3,9,8,7,6,4};
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", ary[i]);
	}


	return (0);
}
