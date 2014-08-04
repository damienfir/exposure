#ifndef CONTROLLER_H
#define CONTROLLER_H

class Controller
{
public:
    Controller ();
    virtual ~Controller ();

protected:
    virtual void set_signals(); 
};

#endif /* CONTROLLER_H */
