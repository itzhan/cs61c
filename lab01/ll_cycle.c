#include <stddef.h>
#include <stdlib.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head){
    if (head == NULL)
        return 0;

    node *slow = head->next;
    node *fast = head->next;

    while (fast != NULL && fast->next != NULL){
        // fast每次走两步,slow走一步
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
            return 1;
    }

    return 0;
}