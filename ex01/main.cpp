#include "Contact.hpp"
#include "PhoneBook.hpp"

void    printLogo()
{
        std::cout << "       _                      _                 _    " << std::endl;
        std::cout << " _ __ | |__   ___  _ __   ___| |__   ___   ___ | | __        _______" << std::endl;
        std::cout << "| '_ \\| '_ \\ / _ \\| '_ \\ / _ \\ '_ \\ / _ \\ / _ \\| |/ /       /      /," << std::endl;
        std::cout << "| |_) | | | | (_) | | | |  __/ |_) | (_) | (_) |   <       /      //" << std::endl;
        std::cout << "| .__/|_| |_|\\___/|_| |_|\\___|_.__/ \\___/ \\___/|_|\\_\\     /______//" << std::endl;
        std::cout << "|_|    ____                        _                     (______(/   " << std::endl;
            std::cout << "      |  _ \\ __ _  __ _  ___      | | __ _ _   _ _ __   ___ " << std::endl;
            std::cout << "      | |_) / _` |/ _` |/ _ \\  _  | |/ _` | | | | '_ \\ / _ \\" << std::endl;
            std::cout << "      |  __/ (_| | (_| |  __/ | |_| | (_| | |_| | | | |  __/" << std::endl;
            std::cout << "      |_|   \\__,_|\\__, |\\___|  \\___/ \\__,_|\\__,_|_| |_|\\___|" << std::endl;
            std::cout << "                  |___/                                     " << std::endl;
             
}

void	megaphone(std::string& message)
{
	int i;

	i = 0;
	while(message[i] != '\0')
	{
		if(message[i] >= 'a' && message[i] <= 'z')
			message[i] = message[i] - 32;
		i++;
	}
}

int main()
{
    std::string cmd;
    int run = 1;

    printLogo();
    std::cout << std::endl;
    while(run)
    {
        std::cout << "Please chose an action >> ", std::cin >> cmd;
        megaphone(cmd);
        if(cmd == "ADD"){
            std::cout << "You want to add a new contact" << std::endl;
        }
        else if(cmd == "SEARCH"){
            std::cout << "You are looking for someone in your contact" << std::endl;;
        }
        else if(cmd == "EXIT"){
            std::cout << "Goodbye !" << std::endl;
            run = 0;
        }
        else{
            std::cout << "wrong input" << std::endl;
        }
    }
    
}