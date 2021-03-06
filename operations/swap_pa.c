/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_pa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:52:21 by marvin            #+#    #+#             */
/*   Updated: 2022/02/23 17:26:52 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_pa(t_stack **stackfrom, t_stack **stackto, bool flag)
{
	t_stack	*topop;

	topop = ft_pop(stackfrom);
	ft_push(stackto, topop->nbr);
	free(topop);
	if (flag)
		write(1, "pa\n", 3);
}
