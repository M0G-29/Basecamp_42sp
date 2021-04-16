#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main()
{
	char *src;
	char *dest;
	src = "bom_dia";

	ft_strcpy(dest, src);
	printf("ta aqui: %s\n", dest);
}
