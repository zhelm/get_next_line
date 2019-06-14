/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhelm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 10:15:19 by zhelm             #+#    #+#             */
/*   Updated: 2019/06/13 10:31:08 by zhelm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"
#include <stdio.h>
//int get_next_line(const int fd, char **line)
//{}


int main()
{
	int fd, sz;
	unsigned char *c;
	c = (char *)malloc(300000);
	fd = open("text.txt", O_RDONLY);
	read(fd, c, 50);
	c[18] = 127;
	printf("%s", c);
}
