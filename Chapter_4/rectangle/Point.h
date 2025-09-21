#ifndef Point_H
#define Point_H

class Point
{
    private:
        int x;
        int y;
    public:
        bool initmembers(int xpos, int ypos);
        int GetX() const;
        int GetY() const;
        bool SetX(int xpos);
        bool SetY(int ypos);
};

#endif