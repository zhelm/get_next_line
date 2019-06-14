/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhelm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 10:15:19 by zhelm             #+#    #+#             */
/*   Updated: 2019/06/14 08:54:58 by zhelm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"
#include <stdio.h>
#define BUFF_SIZE 10000000000000000000000
int get_next_line(const int fd, char **line)
{
	static int x;
	size_t i;
	char *c;

	x = 0;
	i = 0;
	c = (char *)malloc(sizeof(BUFF_SIZE + 1));
	while(i < BUFF_SIZE)
	{
		i++;
	}
	printf("%lu", i);
	return 0;
}

int main()
{
	int fd, sz;
	char *c;
	c = (char *)malloc(300000);
	fd = open("text.txt", O_RDONLY);
	read(fd, c, 50);
	c[18] = 127;
	printf("%s", c);
	get_next_line(fd, &c);
}
