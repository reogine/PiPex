/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matfreex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midfath <midfath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:07:16 by midfath           #+#    #+#             */
/*   Updated: 2022/05/17 23:35:34 by midfath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_matfreex(char ***mat)
{
	int	i;

	i = 0;
	while (mat && mat[0] && mat[0][i])
	{
		free(mat[0][i]);
		i++;
	}
	if (mat)
	{
		free(mat[0]);
		*mat = NULL;
	}
}
