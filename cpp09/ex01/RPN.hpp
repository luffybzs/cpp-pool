/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:48:06 by ayarab            #+#    #+#             */
/*   Updated: 2025/05/21 19:08:07 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdlib>

#define OPERATOR_PLUS '+'
#define OPERATOR_MOINS '-'
#define OPERATOR_MULTI '*'
#define OPERATOR_DIVI '/'
int	ft_pars_and_exec(const std::string &input, std::stack<int> &pile);

#endif