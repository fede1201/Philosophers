/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluzi <fluzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:06:05 by fluzi             #+#    #+#             */
/*   Updated: 2024/10/30 16:20:24 by fluzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include "struct.h"
# include <stdlib.h>      // memset, malloc, free
# include <stdio.h>       // printf
# include <unistd.h>      // write, usleep
# include <sys/time.h>    // gettimeofday
# include <pthread.h>     // pthread_create
# include <stdbool.h>
# include <limits.h>

//chk
bool			ft_atoi_ck(const char *str);
bool			chk_parameter(int ac, char **av);
bool			ft_isdigit(char *str);
//utils
int				ft_atoi(const char *str);
void			set_struct(int ac, char **av, t_first *parameters);
static size_t   time();

#endif