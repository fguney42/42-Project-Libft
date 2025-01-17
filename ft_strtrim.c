
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	length;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	length = ft_strlen(s1);
	while (ft_strrchr(set, *(s1 + length - 1)))
		length--;
	return (ft_substr(s1, 0, length));
}
