/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:36:07 by ademurge          #+#    #+#             */
/*   Updated: 2023/02/15 11:50:06 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP

# define CONTACT_HPP

# include <iostream>

class Contact
{
public:
	Contact(void);
	~Contact(void);

	std::string				getDarkSecret(void) const;
	std::string				getFirstName(void) const;
	std::string				getLastName(void) const;
	std::string				getNickName(void) const;
	unsigned long long		getPhoneNumber(void) const;

	void		setDarkSecret(std::string s);
	void		setFirstName(std::string s);
	void		setLastName(std::string s);
	void		setNickName(std::string s);
	void		setPhoneNumber(unsigned long long nb);

private:
	std::string					darkSecret;
	std::string					firstName;
	std::string					lastName;
	std::string					nickName;
	unsigned long long			phoneNumber;
};

#endif
