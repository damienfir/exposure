#ifndef SELECTION_HANDLER_H
#define SELECTION_HANDLER_H

#include "handlers/handler.h"
#include "gui/selection_view.h"
#include "models/library.h"


class SelectionHandler: public Handler
{
public:
    SelectionHandler(SelectionView*);
    virtual ~SelectionHandler();

    void show();

private:
    Library* _library;
    SelectionView* _selection;
};

#endif /* SELECTION_HANDLER_H */
