
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	t = (char) c;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == t)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
