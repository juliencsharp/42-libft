/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:29:34 by juazouz           #+#    #+#             */
/*   Updated: 2018/11/20 16:30:06 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_all(void *ptr, int size, int step, int (f)(void*))
{
	int	i;

	if (size == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		if (!f(ptr + step * i))
			return (0);
		i++;
	}
	return (1);
}
