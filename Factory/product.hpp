#pragma once

#include <string>

class Notification {
public:
    virtual void send(const std::string &message) = 0;
    virtual ~Notification() {}
};

class EmailNotification : public Notification {
public:
    void send(const std::string &message) override;
};

class SMSNotification : public Notification {
public:
    void send(const std::string &message) override;
};

class SlackNotification : public Notification {
public:
    void send(const std::string &message) override;
};
