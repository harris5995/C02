#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
  {
      int i;
 
      i = 0;
      while (src[i] != '\0')
      {
          dest[i] = src[i]; // so this will make s1 = to whatever s2 is looping through the string
          i++;
      }
      dest[i] = src[i];  // now that we are finsihing looping though s1[i] will equal s2[i]
      return (dest);
  }
  
 // adding a main function here try it out and see what happens

int main(void)
{
	char dest[] = "Flavio";
	char src[] = "Gaucho";

	printf("%s\n", dest);   // displaying what str1 is before ft_strcpy is used on it
	printf("%s\n", src);   // displaying what str1 is before ft_strcpy is used on it
	ft_strcpy(dest, src);  // calling out functtion ft_strcpy on the strings
	printf("%s\n", dest);  // str1 should now become str2
	printf("%s\n", src);   // displaying what str1 is before ft_strcpy is used on it
	return (0);
}
