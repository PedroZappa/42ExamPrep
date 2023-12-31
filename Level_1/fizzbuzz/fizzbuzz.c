#include <unistd.h>

void	print_n(int n);

int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			write(1, "fizzbuzz ", 10);
		else if ((n % 3) == 0)
			write(1, "fizz ", 5);
		else if ((n % 5) == 0)
			write(1, "buzz ", 5);
		else
			print_n(n);
		write(1, "\n", 1);
		n++;

	}
}

void	print_n(int n)
{
	char *digits;

	digits = "0123456789";
	if (n > 9)
		print_n(n / 10);
	write(1, &digits[n % 10], 1);
}
