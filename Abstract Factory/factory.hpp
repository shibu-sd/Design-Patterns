#pragma once

#include "product.hpp"

class NotificationFactory {
public:
    virtual Notification* createNotification() = 0;
    virtual NotificationTemplate* createNotificationTemplate() = 0;
    virtual ~NotificationFactory() {}
};

class EmailNotificationFactory : public NotificationFactory {
public:
    Notification* createNotification() override;
    NotificationTemplate* createNotificationTemplate() override;
};

class SMSNotificationFactory : public NotificationFactory {
public:
    Notification* createNotification() override;
    NotificationTemplate* createNotificationTemplate() override;
};

class SlackNotificationFactory : public NotificationFactory {
public:
    Notification* createNotification() override;
    NotificationTemplate* createNotificationTemplate() override;
};
