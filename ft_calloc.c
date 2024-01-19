/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiraydi <emiraydi@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 06:23:15 by emiraydi          #+#    #+#             */
/*   Updated: 2024/01/07 14:16:40 by emiraydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	memory = malloc(size * count);
	if (memory == NULL)
		return (NULL);
	ft_memset(memory, 0, size * count);
	return (memory);
}
