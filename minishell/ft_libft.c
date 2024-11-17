/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mku <mku@student.42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:47:45 by seojang           #+#    #+#             */
/*   Updated: 2024/11/15 16:49:06 by mku              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ms_test.h"

int	ft_is_alpha(char c)
{
	if ((c >= 64 && c <= 90) || (c >= 97 && c <= 122) || c == 46 || c == 47 || c == '=')
		return (1);
	return(0);
}

int	ft_is_digit(char c)
{
	if ((c >= 48 && c <= 57))
		return (1);
	return(0);
}