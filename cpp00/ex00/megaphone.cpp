/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:20:44 by ayarab            #+#    #+#             */
/*   Updated: 2025/02/25 13:57:32 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char *ft_upcase(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return (str);
}

int main(int ac, char **av)
{
    int j;
    j = 1;
    if (ac < 2)
        return (std:: cerr << "Error Wrong Arguments" << std :: endl ,1);
    while (av[j])
    {
        std::cout << ft_upcase(av[j]) << std::endl;
        j++;
    }
    return (0);
}
