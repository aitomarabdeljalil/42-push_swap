/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:27:37 by marvin            #+#    #+#             */
/*   Updated: 2022/02/16 17:31:08 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_rb(t_stack **stack, bool flag)
{
	t_stack	*head;
	t_stack	*second;
	t_stack	*last;

	if (ft_stacksize(*stack) >= 2)
	{
		head = *stack;
		second = head->next;
		last = ft_stacklast(stack);
		last->next = head;
		head->next = NULL;
		*stack = second;
		if (flag)
			write(1, "rb\n", 3);
	}
}
