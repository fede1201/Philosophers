/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_thread.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluzi <fluzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:21:33 by fluzi             #+#    #+#             */
/*   Updated: 2024/10/30 17:28:43 by fluzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

void	begin_philosophers_routine(t_first *parameters)
{
	int	i;

	i = 0;
	while (parameters->philo[i].id)
	{
		pthread_create(&parameters->philo[i].thread_id, NULL, &philo_routine, (void *) &parameters->philo[i]);
		i++;
	}
	i = 0;
	while (parameters->philo[i].id)
	{
		pthread_join(parameters->philo[i].thread_id, NULL);
		i++;
	}
}