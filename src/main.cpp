#include "GUI.h"
#include "Image.h"


int main(int argc, char *argv[])
{
    /* gtk_init(&argc, &argv); */

    /* GUI gui; */

    /* if(gui.build()) { */
    /*     return 1; */
    /* } */

    /* gui.run(); */

    Image im("IMG_5398.CR2");
    im.load();
    /* im.load_thumb(); */
    
    return 0;
} 
