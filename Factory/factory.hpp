#include "product.hpp"

class NotificationFactory {
public:
    virtual Notification* createNotification() = 0;
    virtual ~NotificationFactory() {};
};

class EmailNotificationFactory : public NotificationFactory {
public:
    Notification* createNotification() override;
};

class SMSNotificationFactory : public NotificationFactory {
public:
    Notification* createNotification() override;
};

class SlackNotificationFactory : public NotificationFactory {
public:
    Notification* createNotification() override;
};
