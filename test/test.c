#include <acirc.h>

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
    acirc *c;
    bool result;

    c = acirc_from_file("add.acirc");
    if (c == NULL)
        return 0;

    result = acirc_ensure(c, true);
    acirc_clear(c);
    free(c);
    return !result;
}
