/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 20:53:17 by cdelhaye          #+#    #+#             */
/*   Updated: 2018/08/13 17:05:35 by cdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    ft_putnbr(int nb)
{
    long nbr;

    nbr = nb;
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr = -nbr;
    }
    if (nbr >= 10)
    {
        ft_putnbr(nbr / 10);
    }
    ft_putchar('0' + (nbr % 10));
}
