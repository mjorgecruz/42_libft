/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:38:08 by masoares          #+#    #+#             */
/*   Updated: 2023/10/08 10:56:41 by masoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	num;

	num = n;
	if (num < 0)
	{
		num = num * (-1);
		write (fd, "-", 1);
	}
	if (num <= 9)
	{
		c = num + '0';
		write (fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
}
/*
#include <fcntl.h>
int main (void)
{
        int     fd;
        
        fd = open("test", O_RDWR | O_TRUNC | O_CREAT, S_IRWXU);
        ft_putnbr_fd(-19358497, fd);
        close(fd);
}*/
