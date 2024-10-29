/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluzi <fluzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:06:05 by fluzi             #+#    #+#             */
/*   Updated: 2024/10/29 16:51:00 by fluzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdlib.h>      // memset, malloc, free
# include <stdio.h>       // printf
# include <unistd.h>      // write, usleep
# include <sys/time.h>    // gettimeofday
# include <pthread.h>     // pthread_create
# include <stdbool.h>
# include <limits.h>

bool    ft_atoi_ck(const char *str);
bool    chk_parameter(int ac, char **av);

#endif