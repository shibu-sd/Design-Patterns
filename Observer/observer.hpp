#pragma once
#include <string>

class Observer {
public:
    virtual void update(const std::string &weather) = 0;
    virtual ~Observer() {}
};

class PhoneDisplay : public Observer {
public:
    void update(const std::string &weather) override;
    void display();
private:
    std::string weather;
};

class TVDisplay : public Observer {
public:
    void update(const std::string &weather) override;
    void display();
private:
    std::string weather;
};
