/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tditshwe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/24 12:57:44 by tditshwe          #+#    #+#             */
/*   Updated: 2016/06/27 18:02:33 by tditshwe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list_stack.h"

void	exec_swap(char *instr, t_stack **a, t_stack **b)
{
	if (ft_strcmp(instr, "sa") == 0)
		ft_swap(a);
	else if (ft_strcmp(instr, "sb") == 0)
		ft_swap(b);
	else if (ft_strcmp(instr, "ss") == 0)
	{
		ft_swap(a);
		ft_swap(b);
	}
}

void	exec_push(char *instr, t_stack **a, t_stack **b)
{
	if (ft_strcmp(instr, "pa") == 0)
	{
		if ((*b)->size > 0)
			ft_push(a, ft_pop(b));
	}
	else if (ft_strcmp(instr, "pb") == 0)
	{
		if ((*a)->size > 0)
			ft_push(b, ft_pop(a));
	}
}

void	exec(char *instr, t_stack *a, t_stack *b)
{
	if (instr[0] == 's')
		exec_swap(instr, &a, &b);
	else if (instr[0] == 'p')
		exec_push(instr, &a, &b);
	else if (ft_strcmp(instr, "ra") == 0)
		rotate(&a);
	else if (ft_strcmp(instr, "rb") == 0)
		rotate(&b);
	else if (ft_strcmp(instr, "rr") == 0)
	{
		rotate(&a);
		rotate(&b);
	}
	else if (ft_strcmp(instr, "rra") == 0)
		rrotate(&a);
	else if (ft_strcmp(instr, "rrb") == 0)
		rotate(&b);
	else if (ft_strcmp(instr, "rrr") == 0)
	{
		rrotate(&a);
		rrotate(&b);
	}
}
