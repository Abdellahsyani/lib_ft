#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	*s;
	int	i[] = {255, 2, 3};

	s = ft_memset(i, 0, 2);

	for (int u = 0; u < 3; u++)
	{
		printf("%d\n", i[u]);
	}

	return (0);
}
