#ifndef Rectangle_H
#define Rectangle_H

#include "Point.h"

class Rectangle
{
    private:
        Point upleft;
        Point lowright;
    public:
        bool initmembers(const Point &ul, const Point &lr);
        void showrecinfo() const;
};
#endif