#include <stdio.h>
#include <stdlib.h>
#include "ft_atoi.c"

int main(int argc, char	**argv)
{
	int res;

	(void)argc;
	res = ft_atoi(argv[1]);
	printf("ft_atoi:\t%d\n", res);
	printf("atoi:\t%d\n", atoi(argv[1]));

	return (0);
}
