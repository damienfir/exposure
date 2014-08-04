#ifndef NOTIFICATIONS_H
#define NOTIFICATIONS_H

#include <vector>
#include <iostream>
#include <typeinfo>


class Notification
{
public:
    Notification(void* source): _source(source) {}
    virtual ~Notification() {}
protected:
    void* _source;
};

class CollectionChangedNotification: public Notification
{
public:
    CollectionChangedNotification(void* source): Notification(source) {}
    virtual ~CollectionChangedNotification() {}
};



class Subscriber
{
public:
    Subscriber ();
    virtual ~Subscriber ();

    void register_subscriber();
    virtual void on_notify(Notification*);

private:
};



class Publisher
{
public:
    Publisher ();
    virtual ~Publisher ();
    static Publisher* get_instance();

    void subscribe(Subscriber*);

    template <class T>
    void notify(T* notification)
    {
        std::cout << typeid(notification).name() << std::endl;
        for(Subscriber* sub : _subscribers) {
            sub->on_notify(notification);
        }
    }

private:
    static Publisher* _instance;
    std::vector<Subscriber*> _subscribers;
};


#endif /* NOTIFICATIONS_H */
