/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   turksort.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 13:57:43 by mchopin       #+#    #+#                 */
/*   Updated: 2026/02/04 23:25:53 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Wanted to rotate both when possible
//then rotate individually
//hard part is passing the changes made to the others stack

//at home changed this to a t node from void return type, change that in the .h too
//still shaky on the single rotation functions
t_node	*double_rotation_choice(t_node **a, t_node **b, t_node *cheapest)
{
		while (cheapest->cost_a > 0 && cheapest->cost_b > 0)
     {
		rr(a, b);
		cheapest->cost_a--;
		cheapest->cost_b--;
     }
		while (cheapest->cost_a < 0 && cheapest->cost_b < 0)
		 {
		rrr(a, b);
		cheapest->cost_a++;
		cheapest->cost_b++;
		 }
    return cheapest;
}

void	rotation_single_a(t_node **a, t_node *cheapest)
{
  while (cheapest->cost_a > 0)
	{
		ra(a);
		cheapest->cost_a--;
	}
	while (cheapest->cost_a < 0)
	{
		rra(a);
		cheapest->cost_a++;
	}
}


void	rotation_single_b(t_node **b, t_node *cheapest)
{
  while (cheapest->cost_b > 0)
	{
		rb(b);
		cheapest->cost_b--;
	}
	while (cheapest->cost_b < 0)
	{
		rrb(b);
		cheapest->cost_b++;
	}
}


void	turk_sort(t_node **a, t_node **b)
{

  
  t_node *cheapest;
  cheapest = cheapest_node(b);
  while(!(*b == NULL && is_sorted(*a)))
  { 
    //it is doing pa so I think it's entering the loop
    //but the rotation's don't catch

    set_index(*a);    
    set_index(*b);    
    have_crush(*a,*b); 
    calcost_b(*b);    
    calcost_a(*a,*b);

    cheapest = cheapest_node(b);
    double_rotation_choice(a,b,cheapest);
    rotation_single_a(a,cheapest);
    rotation_single_b(b,cheapest);
    pa(b,a);
    // print_stack(*a,*b);

  }


}
