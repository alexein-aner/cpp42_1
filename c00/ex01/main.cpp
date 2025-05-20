#include <iostream>
#include "PhoneBook.hpp"

int main() {
    PhoneBook phonebook;
    std::string input;

    while (true) {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, input);
        if (input == "ADD" || input == "add")
            phonebook.addContact();
        else if (input == "SEARCH" || input == "search")
            phonebook.searchContacts();
        else if (input == "EXIT" || input == "exit")
            break;
    }
    return 0;
}
