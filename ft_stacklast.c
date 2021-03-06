/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacklast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:36:06 by marvin            #+#    #+#             */
/*   Updated: 2022/02/13 18:56:07 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacklast(t_stack **stack)
{
	t_stack	*stk;

	stk = *stack;
	if (!ft_isemty(stack))
	{
		while (stk->next)
			stk = stk->next;
	}
	return (stk);
}
