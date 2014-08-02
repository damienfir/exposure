#include "gui/selection_view.h"
#include "models/library.h"


class SelectionHandler
{
public:
    SelectionHandler();
    virtual ~SelectionHandler();

private:
    Library* _library;
    SelectionView* _selection;
};
