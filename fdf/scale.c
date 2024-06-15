/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scale.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mku <mku@student.42gyeongsan.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:00:27 by mku               #+#    #+#             */
/*   Updated: 2024/06/15 17:40:19 by mku              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	pos_scale(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->map_size)
	{
		map->pos[i].x += (WINDOW_X / 2);
		map->pos[i].y += (WINDOW_Y / 2);
		i++;
	}
}

