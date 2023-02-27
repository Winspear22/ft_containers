/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 21:06:50 by adaloui           #+#    #+#             */
/*   Updated: 2023/02/27 14:44:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

/*====================================================*/
/*----------------------INCLUDES----------------------*/
/*====================================================*/
# include <iomanip>
# include <iostream>
# include <stdexcept>
# include <limits>
# include <cstddef>

# include "iterator.hpp"
# include "random_access_iterator.hpp"
# include "iterator_traits.hpp"
# include "random_access_iterator_tag.hpp"
# include "swap.hpp"
# include "is_integral.hpp"
# include "enable_if.hpp"
//# include "relational_operators.hpp"
/*====================================================*/

/*====================================================*/
/*--------------------CODES COULEUR-------------------*/
/*====================================================*/
# define BBLACK "\033[1;30m"
# define BRED "\033[1;31m"
# define BGREEN "\033[1;32m"
# define BYELLOW "\033[1;33m"
# define BBLUE "\033[1;34m"
# define BPURPLE "\033[1;35m"
# define BCYAN "\033[1;36m"
# define BWHITE "\033[1;37m"

/*# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;37m"*/

# define NORMAL "\033[0m"
/*====================================================*/

/*====================================================*/
/*-------------------CODE DE RETURNS------------------*/
/*====================================================*/
# define SUCCESS true
# define FAILURE false
/*====================================================*/

/*====================================================*/
/*--------------TYPE OF CONSTRUCTOR USED--------------*/
/*====================================================*/
# define DEFAULT 0
# define FILL 1
# define RANGE 2
# define COPY 3
# define EQUAL 4
/*====================================================*/

#endif