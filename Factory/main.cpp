#include "factory.hpp"

int main() {
    NotificationFactory *emailNotificationFactory = new EmailNotificationFactory();
    NotificationFactory *smsNotificationFactory = new SMSNotificationFactory();
    NotificationFactory *slackNotificationFactory = new SlackNotificationFactory();

    Notification *emailNotification = emailNotificationFactory->createNotification();
    Notification *smsNotification = smsNotificationFactory->createNotification();
    Notification *slackNotification = slackNotificationFactory->createNotification();

    emailNotification->send("This is Email");
    smsNotification->send("This is SMS");
    slackNotification->send("This is Slack");

    delete emailNotification;
    delete smsNotification;
    delete slackNotification;

    delete emailNotificationFactory;
    delete smsNotificationFactory;
    delete slackNotificationFactory;

    return 0;
}
