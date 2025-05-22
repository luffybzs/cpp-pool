/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:45:17 by ayarab            #+#    #+#             */
/*   Updated: 2025/05/22 14:45:04 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include <string.h>
#include <string>
#include <vector>

class PmergeMe
{
  private:
	std::deque<int> dq;
	std::vector<int> vct;

  public:
	PmergeMe(void);
    PmergeMe(int ac, char **av);
    PmergeMe(const PmergeMe &PmergeMe_cpy);
    PmergeMe &operator=(const PmergeMe &PmergeMe_aff);
	~PmergeMe(void);
    std::vector<int> ft_sort_vector(std::vector<int> &vct);
    std::deque<int> ft_sort_deque(std::deque<int> &dq);
    void ft_pars_Input(int ac, char **av);
    
    void sorter(void);
  };
  int ft_is_Valid_Number(const std::string &str);
