/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_stack.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tditshwe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/22 14:35:13 by tditshwe          #+#    #+#             */
/*   Updated: 2016/06/24 13:55:13 by tditshwe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIST_STACK_H
# define __LIST_STACK_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include "libft/libft.h"
# include <stdio.h>
# define BUFF 100

typedef struct		s_list
{
	int				nbr;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

typedef struct		s_stack
{
    int             size;
	t_list			*first;
	t_list			*last;
}					t_stack;

void				ft_push(t_stack **st, int nbr);
int					ft_pop(t_stack **st);
void    			ft_swap(t_stack **stk);
void    			rotate(t_stack **stk);
void    			rrotate(t_stack **stk);
void				exec(char *instr, t_stack *a, t_stack *b);
char				*readline();
void				init_stk(t_stack **stk);
#endif
