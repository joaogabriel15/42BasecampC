/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvictor- <lvictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 03:12:07 by parabelo          #+#    #+#             */
/*   Updated: 2022/04/11 02:36:43 by lvictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define  COL_TOP_RIGHT 'o'
#define  COL_TOP_LEFT 'o'
#define  MIDDLE '-'
#define  COL_MIDDLE_LEFT_RIGHT '|'
#define  COL_BUTTOM_LEFT 'o'
#define  COL_BUTTOM_RIGHT 'o'
#define  SPACE ' '

void	ft_putchar(char c);

void	ft_validation(int i, int x, int j, int y)
{
	if (i == 1 && j == 1)
		ft_putchar(COL_TOP_LEFT);
	else if (i == x && j == 1)
		ft_putchar(COL_TOP_RIGHT);
	else if (i == 1 && j == y)
		ft_putchar(COL_BUTTOM_LEFT);
	else if (i == x && j == y)
		ft_putchar(COL_BUTTOM_RIGHT);
	else if ((i > 1 && i < x) && (j == 1 || j == y))
		ft_putchar(MIDDLE);
	else if ((i == 1 || i == x) && (j > 1 && j < y))
		ft_putchar(COL_MIDDLE_LEFT_RIGHT);
	else
		ft_putchar(SPACE);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			ft_validation(i, x, j, y);
			i = i + 1;
		}
		ft_putchar('\n');
		j = j + 1;
	}
}
