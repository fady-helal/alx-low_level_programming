#include"lists.h"

/***/
size_t list_len(const list_t *h)
{
size_t count = 0;


if (h == NULL)
{
    return(1);
}
while (h != NULL)
{
h = h -> next;
count++;

}

return(count);

}