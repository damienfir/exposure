#include "notifications.h"



Publisher* Publisher::_instance = 0;


Publisher::Publisher() {}


Publisher::~Publisher() {}

Publisher* Publisher::get_instance()
{
    if (!_instance) {
        _instance = new Publisher();
    }
    return _instance;
}


void Publisher::subscribe(Subscriber* subscriber)
{
    _subscribers.push_back(subscriber);
}


Subscriber::Subscriber()
{
}


void Subscriber::register_subscriber()
{
    Publisher::get_instance()->subscribe(this);
}


Subscriber::~Subscriber() { }


void Subscriber::on_notify(Notification* notification)
{
    std::cout << "called base notification fn" << std::endl;
}
