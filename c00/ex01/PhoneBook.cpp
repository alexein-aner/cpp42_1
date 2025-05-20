#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

PhoneBook::PhoneBook() : contactCount(0), nextIndex(0) {}

void PhoneBook::addContact() {
    if (nextIndex >= 8)
        nextIndex = 0;

    contacts[nextIndex].setContact();

    if (contactCount < 8)
        contactCount++;
    nextIndex++;
}

void PhoneBook::searchContacts() const {
    if (contactCount == 0) {
        std::cout << "PhoneBook is empty." << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < contactCount; i++) {
        contacts[i].displaySummary(i);
    }

    std::cout << "Enter index to view details: ";
    int index;
    std::cin >> index;

    if (std::cin.fail() || index < 0 || index >= contactCount) {
        std::cout << "Invalid index." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }

    contacts[index].displayDetails();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
