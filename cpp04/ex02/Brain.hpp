/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:59:03 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/14 15:21:28 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <string>
class Brain 
{
    private:
        std::string ideas[100];
    public:
    Brain(void);
    Brain(const Brain &Brain_cpy);
    Brain &operator=(const Brain &Brain_aff);
    ~Brain(void);
    std::string GetIdeas(int i);
    void Fill_Idea(std::string idea, int i);
};