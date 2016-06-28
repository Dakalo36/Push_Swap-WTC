#include "list_stack.h"

int	instr_error(char *instr)
{
	while (*instr != '\0')
	{
		if (ft_isalpha(*instr) == 0 && *instr != '\n')
			return (1);
		if (*(instr + 1) == '\0' && *instr != '\n')
			return (1);
		instr++;
	}
	return (0);
}

void	putstk(t_stack *stk)
{
	t_list *lst;

	lst = stk->first;
	while (lst)
	{
		ft_putnbr(lst->nbr);
		ft_putchar(' ');
		lst = lst->next;
	}
	ft_putchar('\n');
}

int	main()
{
	char *line;
	char **instr;
	t_stack	*a;
	t_stack *b;
	
	init_stk(&a);
	init_stk(&b);
	ft_push(&a, 15);
	ft_push(&a, 2);
	ft_push(&a, 4);
	ft_push(&a, 10);
	ft_push(&a, 5);
	line = readline();
	//if (instr_error(line))
		//ft_putstr("Error\n");
	//else
	//{
		instr = ft_strsplit(line, '\n');
		ft_putstr("a: ");	
		putstk(a);
		ft_putstr("b: ");	
		putstk(b);
		while (*instr)
		{
			exec(*instr,a, b);
			ft_putstr("Exec ");
			ft_putstr(*instr);
			ft_putstr("\n");
			ft_putstr("a: ");	
			putstk(a);
			ft_putstr("b: ");	
			putstk(b);
			instr++;
		}
	//}
	return (0);
}
