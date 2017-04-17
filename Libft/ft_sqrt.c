/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yskrypny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 16:13:03 by yskrypny          #+#    #+#             */
/*   Updated: 2016/12/13 16:13:12 by yskrypny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_sqrt(const float f)
{
	t_value s_sqrt;

	s_sqrt.u.f = f;
	s_sqrt.u.i = (1 << 29) + (s_sqrt.u.i >> 1) - (1 << 22);
	s_sqrt.u.f = s_sqrt.u.f + f / s_sqrt.u.f;
	s_sqrt.u.f = 0.25f * s_sqrt.u.f + f / s_sqrt.u.f;
	return (s_sqrt.u.f);
}
