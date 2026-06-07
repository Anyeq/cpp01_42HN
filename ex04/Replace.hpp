/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 13:51:10 by asando            #+#    #+#             */
/*   Updated: 2026/06/06 17:54:36 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>

class	Replace {
	private:
		std::string	_filename;
		std::string _str1;
		std::string	_str2;

	public:
		Replace(std::string filename, std::string str1, std::string str2);
		~Replace();

		bool process();
};

#endif
