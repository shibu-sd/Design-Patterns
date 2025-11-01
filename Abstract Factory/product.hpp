#pragma once

#include <string>

// Product 1

class Notification {
public:
    virtual void send(const std::string &message) = 0;
    virtual ~Notification() {}
};

class EmailNotification : public Notification {
public:
    void send(const std::string &message) override;
};

class SlackNotification : public Notification {
public:
    void send(const std::string &message) override;
};

class SMSNotification : public Notification {
public:
    void send(const std::string &message) override;
};

// Product 2

class NotificationTemplate {
public:
    virtual std::string format(const std::string &message) = 0;
    virtual ~NotificationTemplate() {}
};

class EmailNotificationTemplate : public NotificationTemplate {
public:
    std::string format(const std::string &message) override;
};

class SMSNotificationTemplate : public NotificationTemplate {
public:
    std::string format(const std::string &message) override;
};

class SlackNotificationTemplate : public NotificationTemplate {
public:
    std::string format(const std::string &message) override;
};
