/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:16:26 by omimouni          #+#    #+#             */
/*   Updated: 2021/10/21 20:14:06 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# define CONTACTS_NUM 8

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		int		filled;
		int		current_num;
		Contact	contacts[CONTACTS_NUM];
		void	read_contact();
		void	print_contacts();
		std::string	print_sub(std::string str);
};

#endif