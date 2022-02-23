#include <unistd.h>

//Create lowercase

char	ft_lowercase(char *str)
	{
		int i;
	
		i = 0;
		if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] = str[i] + 32;
	}

char	*ft_strcapitalize(char *str)
{
	int i;
	
	i = 1;
	ft_lowercase(str);
	while (str[i])
	{
	if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
				(str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
				(str[i - 1] >= '0' && str[i - 1] <= '9')))	
	
	{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}	

}
