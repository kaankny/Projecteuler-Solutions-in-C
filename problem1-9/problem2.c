#include <stdio.h>

int	main()
{
	int sum = 0;
	int prev = 0;
	int curr = 1;
	int next = 0;

	while (next < 4000000)
	{
		next = prev + curr;
		prev = curr;
		curr = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%d\n", sum);
	return (0);
}
