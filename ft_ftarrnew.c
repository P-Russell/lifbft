/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dbarrnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-jage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 07:44:24 by lde-jage          #+#    #+#             */
/*   Updated: 2017/08/09 11:25:19 by lde-jage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

float			**ft_ftarrnew(int row, int col)
{
	float		**arr;
	int			i;

	i = 0;
	arr = (float **)malloc(sizeof(float *) * row);
	if (arr == NULL)
		return (NULL);
	while (i < row)
	{
		arr[i] = (float *)malloc(sizeof(float) * col);
		if (arr[i] == NULL)
			return (NULL);
		i++;
	}
	return (arr);
}
