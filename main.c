/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   'main.c'                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron  <lbaron@student.42berlin.de>       :+:  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023-07-29 23:19:45 by lbaron            :+:    #+#             */
/*   Updated: 2023-07-29 23:19:45 by lbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philos.h"

//int mails = 0;
//pthread_mutex_t mutex;
//
//void *routine()
//{
//	for (int i = 0; i < 1000000;i++)
//	{
//		pthread_mutex_lock(&mutex);
//		mails++;
//		pthread_mutex_unlock(&mutex);
//	}
//}

typedef struct s_philo
{
	int		id;
}t_philo;

typedef struct s_data
{
	int		num_philosophers;
	int		time_to_die;
	int		time_to_eat;
	int		time_to_sleep;
	int		n_to_eat;
	t_philo	philo;
}t_data;

int	main(int argc, char *argv[])
{
	t_data	v;

	if (argc != 5 && argc != 6)
	{
		print_message();
		return (1);
	}
	v.num_philosophers = ft_atoi(argv[1]);
	v.time_to_die = ft_atoi(argv[2]);
	v.time_to_eat = ft_atoi(argv[3]);
	v.time_to_sleep = ft_atoi(argv[4]);
	if(argv[5])
		v.n_to_eat = ft_atoi(argv[5]);
	printf("Number of philosophers: %d\n", v.num_philosophers);
	printf("Time to die: %d\n", v.time_to_die);
	printf("Time to eat: %d\n", v.time_to_eat);
	printf("Time to sleep: %d\n", v.time_to_sleep);
	if (argv[5])
		printf("Number of times each philosopher must eat: %d\n", v.n_to_eat);
//	pthread_t th[8];
//	int i;
//
//	i = 0;
//	pthread_mutex_init(&mutex, NULL);
//	while(i < 8)
//	{
//		if (pthread_create(&th[i], NULL, &routine, NULL) != 0) {
//			return (1 + i);
//		}
//		printf("Thread %d has started\n", i);
//		i++;
//	}
//	i = 0;
//	while (i < 8)
//	{
//		if (pthread_join(th[i], NULL) != 0) {
//			return (i * 2);
//		}
//		printf("Thread %d has finished exec\n", i);
//		i++;
//	}
//	pthread_mutex_destroy(&mutex);
//	printf("Number of mails: %d\n", mails);
//	return (0);
}

