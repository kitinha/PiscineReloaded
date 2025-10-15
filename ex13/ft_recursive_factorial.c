/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:48:18 by ineguill          #+#    #+#             */
/*   Updated: 2025/10/14 18:14:28 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result; 

	result = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	else
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
/* #include <stdio.h>
int	main()
{
	printf ("%d", ft_recursive_factorial(5));
} */