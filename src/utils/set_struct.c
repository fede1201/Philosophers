/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_struct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluzi <fluzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:54:22 by fluzi             #+#    #+#             */
/*   Updated: 2024/10/30 16:37:22 by fluzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

static int  u_max_meals(int ac, char **av)
{
	if (ac == 5)
		return (-1);
	return (ft_atoi(av[5]));
}

static pthread_mutex_t  *safe_malloc_fork(int number)
{
	pthread_mutex_t *ret;
	
	ret = (pthread_mutex_t *) malloc(sizeof(pthread_mutex_t) * (number + 1));
	if (!ret)
		return NULL;
	ret[number] = (pthread_mutex_t) {0};
	return (ret);
}

static t_philo  *safe_malloc_philo(int number)
{
	t_philo *ret;
	
	ret = (t_philo *) malloc(sizeof(t_philo) * (number + 1));
	if (!ret)
		return NULL;
	ret[number] = (t_philo){0}; 
	return (ret);
}

static void	set_struct_philo(t_first *parameters)
{
	int	i;

	i = 0;
	while (parameters->philo[i].id)
	{
		parameters->philo[i].id = i + 1;
		parameters->philo[i].number_of_meals = 0;
		parameters->philo[i].is_dead = &parameters->philosopher_dead;
		parameters->philo[i].last_meal_time = parameters->starting_time;
		parameters->philo[i].first = parameters;
		parameters->philo[i].l_fork = &parameters->fork[i];
		parameters->philo[i].r_fork = &parameters->fork[(i + 1) % parameters->number_of_philo];
		pthread_mutex_init(&parameters->philo[i].eating, NULL);
		i++;
	}
}


void    set_struct(int ac, char **av, t_first *parameters)
{
	parameters->number_of_philo = ft_atoi(av[1]);
	parameters->time_to_die = ft_atoi(av[2]);
	parameters->time_to_eat = ft_atoi(av[3]);
	parameters->time_to_sleep = ft_atoi(av[4]);
	parameters->starting_time = time();
	parameters->max_meals = u_max_meals(ac, av);
	parameters->fork = safe_malloc_fork(ft_atoi(av[1]));
	parameters->philo = safe_malloc_philo(ft_atoi(av[1]));
	parameters->number_of_meals = 0;
	parameters->philosopher_dead = 0;
	pthread_mutex_init(&parameters->print, NULL);
	pthread_mutex_init(&parameters->death_lock, NULL);
	pthread_mutex_init(&parameters->ready_lock, NULL);
	set_struct_philo(parameters);
}
