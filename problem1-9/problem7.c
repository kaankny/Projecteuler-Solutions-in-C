#include <stdio.h>

int	main()
{
	int j = 0;
	int k = 2;
	int	count = 0;
	int	prime = 0;
	
	while (k)
	{
		j = 2;
		while (j < k)
		{
			if (k % j == 0)
				break;
			j++;
		}
		if (j == k)
		{
			count++;
			prime = k;
		}
		if (count == 10001)
			break;
		k++;
	}
	printf("%d\n", prime);
	return (0);
}
