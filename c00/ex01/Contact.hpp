/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:10:15 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/13 20:40:08 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact {
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone;
		std::string	darkest_secret;
	public:
		void		print();
		void		setFirstName(std::string str);
		void		setLastName(std::string str);
		void		setNickamae(std::string str);
		void		setPhone(std::string str);
		void		setDarketSecret(std::string str);
		
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		std::string	getPhone(void);
		std::string	getDarketSecret(void);
		
};

#endif