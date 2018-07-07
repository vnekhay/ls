/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnekhay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 07:02:21 by vnekhay           #+#    #+#             */
/*   Updated: 2018/03/25 23:36:59 by vnekhay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float		ft_sqrt(float nb)
{
	float	x;

	x = 0;
	while (x * x < nb)
		x++;
	return (x);
}