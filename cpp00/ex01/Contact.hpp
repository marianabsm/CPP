/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:48:57 by marianamest       #+#    #+#             */
/*   Updated: 2025/05/05 15:37:31 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Contact 
{
private:
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;

    std::string formatField(const std::string& field) const;

public:
    void addValues(const std::string& fn, const std::string& ln, const std::string& nn, const std::string& pn, const std::string& ds);
    void printLine() const;
    void display() const;
};

