#include <iostream>
#include "SimpleList.h"

int main()
{
    SimpleList s1;
    s1.QueueItem(100);
    s1.QueueItem(200);

    cout << s1.DequeueItem() << endl;

    SimpleList s2;
    s2.Push(15);
    s2.Pop();
}
