#include <fcntl.h>
void	ft_cat(int fd);

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		int fd;
		for (int i = 1; i < ac; i++)
		{
			fd = open(av[i], O_RDONLY);
			ft_cat(fd);
		}
	}
	else
		ft_cat(0);
	return (0);
}
