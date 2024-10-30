/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluzi <fluzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:24:07 by fluzi             #+#    #+#             */
/*   Updated: 2024/10/30 14:57:02 by fluzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"


int main(int ac, char **av) 
{
    t_first parameters;
    
    if (!chk_parameter(ac, av))
        return (1);
    set_struct(ac, av, &parameters);
    return (0);
}

