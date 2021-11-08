/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:16:26 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/08 18:35:47 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# define CONTACTS_NUM 8

class PhoneBook {
	private:
		int		filled;
		int		current_num;
		Contact	contacts[CONTACTS_NUM];
	public:
		PhoneBook();
		void	read_contact();
		void	print_contacts();
		std::string	print_sub(std::string str);
};

#endif