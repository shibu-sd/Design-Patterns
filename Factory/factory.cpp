#include "factory.hpp"

Notification* EmailNotificationFactory::createNotification() {
    return new EmailNotification();
};

Notification* SMSNotificationFactory::createNotification() {
    return new SMSNotification();
}

Notification* SlackNotificationFactory::createNotification() {
    return new SlackNotification();
}
