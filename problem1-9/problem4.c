#include <stdio.h>

int	main()
{
	int i = 999;
	int j = 999;

	int largest = 0;

	while (i > 99)
	{
		while (j > 99)
		{
			int product = i * j;
			int tmp = product;
			int reverse = 0;

			while (tmp != 0)
			{
				reverse = reverse * 10 + tmp % 10;
				tmp /= 10;
			}
			if (product == reverse && product > largest)
				largest = product;
			j--;
		}
		j = 999;
		i--;
	}
	printf("%d\n", largest);
	return (0);
}
