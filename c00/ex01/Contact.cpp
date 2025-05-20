#include "Contact.hpp"
#include <iostream>
#include <iomanip>

static std::string truncate(const std::string& str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void Contact::setContact() {
    std::cout << "First name: ";
    std::getline(std::cin, firstName);
    std::cout << "Last name: ";
    std::getline(std::cin, lastName);
    std::cout << "Nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Phone number: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Darkest secret: ";
    std::getline(std::cin, darkestSecret);
}

void Contact::displaySummary(int index) const {
    std::cout << std::setw(10) << index << "|"
              << std::setw(10) << truncate(firstName) << "|"
              << std::setw(10) << truncate(lastName) << "|"
              << std::setw(10) << truncate(nickname) << std::endl;
}

void Contact::displayDetails() const {
    std::cout << "First name: " << firstName << std::endl;
    std::cout << "Last name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone number: " << phoneNumber << std::endl;
    std::cout << "Darkest secret: " << darkestSecret << std::endl;
}
