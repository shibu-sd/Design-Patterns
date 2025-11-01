#include "factory.hpp"

// Create product 1

Notification* EmailNotificationFactory::createNotification() {
    return new EmailNotification();
}

Notification* SMSNotificationFactory::createNotification() {
    return new SMSNotification();
}

Notification* SlackNotificationFactory::createNotification() {
    return new SlackNotification();
}

// Create product 2

NotificationTemplate* EmailNotificationFactory::createNotificationTemplate() {
    return new EmailNotificationTemplate();
}

NotificationTemplate* SMSNotificationFactory::createNotificationTemplate() {
    return new SMSNotificationTemplate();
}

NotificationTemplate* SlackNotificationFactory::createNotificationTemplate() {
    return new SlackNotificationTemplate();
}
