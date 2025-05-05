/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:48:52 by marianamest       #+#    #+#             */
/*   Updated: 2025/05/05 15:07:21 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

class PhoneBook 
{
	private:
		Contact contacts[8];
		int		index;
		bool	status[8];

	public:
		void	addPhoneBook(void);
		void	add(void);
		void	search(void);
};
