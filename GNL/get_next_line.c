/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/29 20:36:52 by cdebord           #+#    #+#             */
/*   Updated: 2016/01/05 17:22:27 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		line_buff(int const fd, char *buf, char *stock[fd])
{
	char	*tmp;
	char	*str;
	int		i;

	i = 0;
	while (!(str = ft_strchr(stock[fd], '\n')) &&
		(i = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[i] = '\0';
		tmp = stock[fd];
		stock[fd] = ft_strjoin(tmp, buf);
		ft_strdel(&tmp);
	}
	ft_strdel(&buf);
	if (i < 0)
		return (-1);
	if (i == 0 && str == NULL)
		return (0);
	return (1);
}

int		get_next_line(int const fd, char **line)
{
	static char	*stock[256];
	char		*buf;
	int			ret;
	char		*free;

	buf = ft_strnew(BUFF_SIZE);
	if (fd < 0 || line == NULL || buf == NULL)
		return (-1);
	if (stock[fd] == NULL)
		stock[fd] = ft_strnew(1);
	ret = line_buff(fd, buf, &(*stock));
	if (ret == -1)
		return (-1);
	if (ret == 0)
	{
		*line = stock[fd];
		stock[fd] = NULL;
		return (0);
	}
	*line = ft_strsub(stock[fd], 0, (ft_strchr(stock[fd], '\n') - stock[fd]));
	free = stock[fd];
	stock[fd] = ft_strdup(ft_strchr(stock[fd], '\n') + 1);
	ft_strdel(&free);
	return (1);
}
