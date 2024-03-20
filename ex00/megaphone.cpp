/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:24:48 by peternsaka        #+#    #+#             */
/*   Updated: 2024/03/20 12:37:35 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	megaphone(std::string message){
	int i;

	i = 0;
	while(message[i] != '\0')
	{
		if(message[i] >= 'a' && message[i] <= 'z')
			message[i] = message[i] - 32;
		std::cout << message[i];
		i++;
	}
}

int main(int ac, char **av)
{
	int i;

	i = 1;
	if(ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	while(av[i])
	{
		megaphone(av[i]);
		i++;
	}
}