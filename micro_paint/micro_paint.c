#include <stdio.h>
#include <unistd.h>

int		b_weight, b_height;
char	b_c;

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		++i;
	return (i);
}

void  draw_background(FILE *fp)
{
  fscanf(fp, "%d %d %c\n", &b_weight, &b_height, &c);
}

int	main(int argc, char **argv)
{
	FILE	*fp;

	if (argc != 2)
	{
		write(1, "Error: argument\n", ft_strlen("Error: argument\n"));
		return (1);
	}
	fp = fopen(argv[1], "r");
	if (fp == 0)
	{
		write(1, "Error: Operation file corrupted\n",
			ft_strlen("Error: Operation file corrupted\n"));
		return (1);
	}
  draw_background(fp);
  return (0);
}
// The last line can be with or without a \n
