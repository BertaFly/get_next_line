/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inovykov <inovykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 15:07:00 by inovykov          #+#    #+#             */
/*   Updated: 2018/01/09 14:29:16 by inovykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# define BUFF_SIZE 4

# include <fcntl.h>
# include <stdlib.h>
# include "./libft/includes/libft.h"

int	get_next_line(const int fd, char **line);

#endif
