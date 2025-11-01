#include "factory.hpp"

void client(NotificationFactory *factory, const std::string &message) {
    Notification *notification = factory->createNotification();
    NotificationTemplate *notificationTemplate = factory->createNotificationTemplate();

    std::string formattedMessage = notificationTemplate->format(message);

    notification->send(formattedMessage);

    delete notification;
    delete notificationTemplate;
}

int main() {
    NotificationFactory *emailNotificationFactory = new EmailNotificationFactory();
    NotificationFactory *smsNotificationFactory = new SMSNotificationFactory();
    NotificationFactory *slackNotificationFactory = new SlackNotificationFactory();

    client(emailNotificationFactory, "This is Email");
    client(smsNotificationFactory, "This is SMS");
    client(slackNotificationFactory, "This is Slack");

    delete emailNotificationFactory;
    delete smsNotificationFactory;
    delete slackNotificationFactory;

    return 0;
}
