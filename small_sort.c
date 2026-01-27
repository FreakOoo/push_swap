/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   turksort.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 17:31:51 by mchopin       #+#    #+#                 */
/*   Updated: 2026/01/27 19:44:26 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//need index
//need to calculate value to find best fit
//bring best fit to top
//make stack actions write their name whenever they are used

//make small sort

void small_sort(t_node **a)
{
    t_node *top;
    t_node *last;
    top = *a;
    last = *a;
    while (last->next)
        last = last->next;
    
    if(top > last && top > top -> next)
    {
        ra(a);
        if(is_sorted)
            sa(a);
    }
    else if(top > last && top < top -> next)
    {
        
    }
}
