/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiraydi <emiraydi@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:38:31 by emiraydi          #+#    #+#             */
/*   Updated: 2023/12/14 20:15:15 by emiraydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int a)
{
	if (a >= 'a' && a <= 'z')
		return (a - 32);
	return (a);
}