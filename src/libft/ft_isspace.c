/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:23:58 by noalexan          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/01/10 15:38:34 by mayoub           ###   ########.fr       */
=======
/*   Updated: 2022/07/20 16:45:24 by mayoub           ###   ########.fr       */
>>>>>>> c5507675181cf40e14d1f56e43c22cd6ebe8c99b
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\n'
		|| c == '\r' || c == '\f')
		return (1);
	return (0);
}
