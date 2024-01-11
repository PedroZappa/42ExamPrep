int     ft_strlen(char *str);
void	ft_swap(char *a, char *b);

char    *ft_strrev(char *str)
{
	int len;
	int i;

	if (!str)
		return (0);
	len = ft_strlen(str);
	i = -1;
	while (++i < len / 2)
		ft_swap(&str[i], &str[len - 1 - i]);
	return (str);
}

int     ft_strlen(char *str)
{
	int     i = 0;
	while (str[i])
		++i;
	return (i);
}

void	ft_swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}
