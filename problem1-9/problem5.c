#include <stdio.h>

int	main()
{
	int k = 1;
	int n = 0;
	int i = 1;
	while (k)
	{
		for(int j = 1; i % j == 0; j++)
		{
			if (j == 21)
			{
				k = 0;
				break;
			}
		}
		if (k)
			i++;
	}
	printf("%d\n", i);
	return (0);
}
