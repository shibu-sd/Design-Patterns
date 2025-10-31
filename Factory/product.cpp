#include "product.hpp"
#include <iostream>

void EmailNotification::send(const std::string &message) {
    std::cout << "Sending Email Notification : " << message << '\n';
}

void SMSNotification::send(const std::string &message) {
    std::cout << "Sending SMS Notification : " << message << '\n';
}

void SlackNotification::send(const std::string &message) {
    std::cout << "Sending Slack Notification : " << message << '\n';
}
