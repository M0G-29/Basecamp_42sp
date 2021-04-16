#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char a[] = "abc";
	char b[] = "jadaD";
	unsigned int n;

	n = 0;
	printf("%s\n", ft_strncat(a, b, n));
}
