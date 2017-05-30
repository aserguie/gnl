/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserguie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 14:53:31 by aserguie          #+#    #+#             */
/*   Updated: 2017/05/29 15:44:46 by aserguie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 2
# include "./libft/libft.h"

typedef	struct	s_block
{
	char			*content;
	int				fd;
	struct s_block	*next;
}				t_block;

int				get_next_line(const int fd, char **line);
#endif
