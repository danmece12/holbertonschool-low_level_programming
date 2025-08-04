#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>

int is_98(int x)              { return (x == 98); }
int is_strictly_positive(int x) { return (x > 0); }
int abs_is_98(int x)          { return (x == 98 || x == -98); }

int main(void)
{
int array[] = {0, -98, 98, 402, 1024};
int idx;

idx = int_index(array, 5, is_98);
printf("%d\n", idx);       /* should print 2 */

idx = int_index(array, 5, abs_is_98);
printf("%d\n", idx);       /* should print 1 (-98 matches) */

idx = int_index(array, 5, is_strictly_positive);
printf("%d\n", idx);       /* should print 2 (98 is first >0) */

idx = int_index(array, 5, NULL);
printf("%d\n", idx);       /* should print -1 (NULL comparator) */

idx = int_index(NULL, 5, is_98);
printf("%d\n", idx);       /* -1 (NULL array) */

idx = int_index(array, 0, is_98);
printf("%d\n", idx);       /* -1 (size <= 0) */

return (0);
}
