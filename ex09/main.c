#include<stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *b;

	b = a;
	printf("%s", ft_strcapitalize(b));
	return (0);
}
