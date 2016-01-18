/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 15:43:17 by cdebord           #+#    #+#             */
/*   Updated: 2016/01/03 16:24:25 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 15

# include "libft/includes/libft.h"
# include <fcntl.h>
# include <sys/uio.h>
# include <sys/types.h>

int		get_next_line(int const fd, char **line);
#endif
