/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abablil <abablil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:22:59 by abablil           #+#    #+#             */
/*   Updated: 2023/11/15 10:01:52 by abablil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*new_str;

	new_str = (void *)malloc(count * size);
	if (new_str != NULL)
		ft_memset(new_str, 0, count * size);
	return (new_str);
}
