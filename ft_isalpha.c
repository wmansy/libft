/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:03:16 by plouie            #+#    #+#             */
/*   Updated: 2021/10/27 15:03:17 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int ch)
{
	return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));
}
