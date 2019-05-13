#ifndef parent_H //Ifndef checks if the given token parent_H is defined already. If true, skip the following until #endif, otherwise create a struct foo.
#define parent_H

struct foo
{
    int files[4];
};

#endif

//The whole sturcture can be replaced by one line
//#pragma once <-- more concise, do exactly the same on the above.
