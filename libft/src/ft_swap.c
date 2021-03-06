/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inovykov <inovykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 19:14:23 by inovykov          #+#    #+#             */
/*   Updated: 2017/12/14 16:21:35 by inovykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_swap(int *a, int *b)
{
	int tmp;

	if (a != NULL && b != NULL)
	{
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
}
