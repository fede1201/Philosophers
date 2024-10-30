/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluzi <fluzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:13:26 by fluzi             #+#    #+#             */
/*   Updated: 2024/10/30 16:12:55 by fluzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

typedef struct s_philo
{
	int						id;
	int						number_of_meals;
	int						*is_dead;
	size_t					last_meal_time;
	pthread_t 				thread_id;
	pthread_mutex_t 		eating;
	pthread_mutex_t			*r_fork;
	pthread_mutex_t			*l_fork;
	t_first					*first;
	
}	t_philo;

typedef struct s_first
{
	int					number_of_philo;
	int					time_to_die;
	int					time_to_eat;
	int					time_to_sleep;
	int					number_of_meals;
	int					philosopher_dead;
	int					max_meals;
	size_t				starting_time;
	t_philo				*philo;
	pthread_mutex_t		*fork;
	pthread_mutex_t 	print;
	pthread_mutex_t 	death_lock;
	pthread_mutex_t		ready_lock;
}	t_first;