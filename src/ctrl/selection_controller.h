#ifndef SELECTION_CONTROLLER_H
#define SELECTION_CONTROLLER_H

#include "ctrl/controller.h"
#include "gui/selection_view.h"
#include "models/library.h"


class SelectionController: public Controller
{
public:
    SelectionController(SelectionView*);
    virtual ~SelectionController();

    void realize();
    void set_signals();

    void change_collection();

private:
    Library* _library;
    SelectionView* _selection;
};

#endif /* SELECTION_CONTROLLER_H */
