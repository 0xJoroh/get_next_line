#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define MAX_INT 2147483647
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

int				get_next_line(int fd, char **line);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strchr(const char *s, int c);
char			*ft_strcpy(char *dst, const char *src);
void			*ft_calloc(size_t count, size_t size);
size_t			ft_strlen(const char *str);

#endif
