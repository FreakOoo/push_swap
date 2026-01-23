/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/23 19:47:20 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/23 19:50:45 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//
//run valgrind with ./push_swap "1 2 3 4 5 5 " to see if it 
//works with free split missing

#include "push_swap.h"

void pb(t_node **a, t_node **b)
{

t_node *tmp;
if(*a == NULL)
    return;

tmp = *a;
*a = (*a)->next;

tmp->next = *b;
*b = tmp;
}

