#include "get_next_line.h"

char		*ft_strdup(const char *s1)
{
	char	*s;
	int		len;
	int		i;

	len = ft_strlen(s1) + 1;
	if (!(s = (char*)malloc(len)))
		return (0);
	i = -1;
	while (s1[++i])
		s[i] = s1[i];
	s[i] = '\0';
	return (s);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;

	i = 0;
	str = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		str = (char*)malloc(sizeof(str) * ft_strlen(s1) + ft_strlen(s2) + 1);
		if (str != NULL)
		{
			while (*s1 != '\0')
			{
				str[i] = *s1++;
				i++;
			}
			while (*s2 != '\0')
			{
				str[i] = *s2++;
				i++;
			}
			str[i] = '\0';
		}
	}
	return (str);
}

char		*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char*)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char*)s);
	return (0);
}

char		*ft_strcpy(char *dst, const char *src)
{
	int len;

	len = ft_strlen(src);
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (dst - len);
}

void		*ft_calloc(size_t count, size_t size)
{
	unsigned char			*ptr;
	int						len;
	int						i;

	len = count * size;
	i = 0;
	if (!(ptr = (unsigned char*)malloc(size * count)))
		return (NULL);
	while (i < len)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
