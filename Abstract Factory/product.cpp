#include "product.hpp"
#include <iostream>

// Product 1

void EmailNotification::send(const std::string &message) {
    std::cout << "Sending Email Notification : " << message << '\n';
}

void SMSNotification::send(const std::string &message) {
    std::cout << "Sending SMS Notification : " << message << '\n';
}

void SlackNotification::send(const std::string &message) {
    std::cout << "Sending Slack Notification : " << message << '\n';
}

// Product 2

std::string EmailNotificationTemplate::format(const std::string &message) {
    return "<Email>" + message + "</Email>";
}

std::string SMSNotificationTemplate::format(const std::string &message) {
    return "<SMS>" + message + "</SMS>";
}

std::string SlackNotificationTemplate::format(const std::string &message) {
    return "<Slack>" + message + "</Slack>";
}
