#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char *src;
	char *dest;
	unsigned int n;
	
	src = "bom_dia";
	n = 3 ;

	ft_strncpy(dest, src, n);
	printf("ta aqui: %s\n", dest);
}
