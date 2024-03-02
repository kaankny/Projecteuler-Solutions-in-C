#include <stdio.h>

int	main()
{
	long long int	n = 600851475143;
	long long int	i = 2;
	int largest = 0;

	while (n > 1)
	{
		if (n % i == 0)
		{
			n /= i;
			largest = i;
		}
		i++;
	}

	printf("%d\n", largest);
	return (0);
}
