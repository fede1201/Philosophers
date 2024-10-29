/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluzi <fluzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:50:03 by fluzi             #+#    #+#             */
/*   Updated: 2024/10/29 17:02:14 by fluzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

static bool chk_numbers(char **av) 
{
    int i = 1;
    while (av[i]) {
        if (!ft_atoi_ck(av[i]))
            return false;
        i++;
    }
    return true;
}

bool chk_parameter(int ac, char **av) 
{
    if (ac != 6 && ac != 7)
        return (printf("Error\n./philo [n_philosophers][t_die][t_eat][t_sleep]"),false);
    if (!chk_numbers(av))
        return (printf("Error\n Invalid parameters"), false);
    return true;
}