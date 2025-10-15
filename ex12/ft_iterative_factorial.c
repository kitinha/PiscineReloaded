/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:54:52 by ineguill          #+#    #+#             */
/*   Updated: 2025/10/14 18:14:07 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int factorial;

	factorial = 1;
	result = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (factorial <= nb)
	{
		result *= factorial;
		factorial++;
	}
	return (result);
}
/* #include <stdio.h>
int main()
{
	printf("%d", ft_iterative_factorial(3));
} */