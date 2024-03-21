#ifndef __CONTACT_H__
#define __CONTACT_H__
#include <iostream>
#include <string>

/************************************************/
/**  				  CLASS					   **/
/************************************************/

class	Contact{
	
	private:
		std::string firstName;
		std::string lasttName;
		std::string nicktName;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		Contact();
		void	setToNull(std::string& toSet);
		// void	setLastName(std::string lasttName);
		// void	setNicktName(std::string nicktName);
		// void	setPhoneNumbert(std::string phoneNumber);
		// void	setDarkestSecret(std::string darkestSecret);


};


#endif