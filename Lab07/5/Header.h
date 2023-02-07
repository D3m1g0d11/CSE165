#ifndef LA5_Header_h
#define LA5_Header_h

#include <iostream>
#include <vector>

class AppRect
{
    public:
        int x, y, w, h;
        AppRect(int x, int y, int w, int h)
        {
            this->x = x;
            this->y = y;
            this->w = w;
            this->h = h;
        }
};
class AppWindow
{
    protected:
    AppRect* one;
    public:
    AppWindow()
    {
        one = new AppRect(0, 0, 0, 0);
    }
    AppWindow(int x, int y, int w, int h)
    {
        one = new AppRect(x, y, w, h);
    }
    AppWindow(const AppRect& r)
    {
        one = new AppRect(r.x, r.y, r.w, r.h);
    }
    const AppRect& rect()
    {
        return *one;
    }
    virtual void resize(int w, int h)
    {
        one->w = w;
        one->h = h;
    }
};
class CircleWin : public AppWindow
{
    double radius;
    public:
    
    CircleWin(int x, int y, int w, int h){
        one->x = x;
        one->y = y;
        one->w = w;
        one->h = h;

        if(w > h)
        {
            radius = h;
        }else{
            radius = w;
        }
    }
    CircleWin(const AppRect& r){
        one->x = r.x;
        one->y = r.y;
        one->w = r.w;
        one->h = r.h;
        if(r.w > r.h)
        {
            radius = r.h;
        }else{
            radius = r.w;
        }
    }

    void resize(int w, int h){
        if(w < h){
            radius = w;
        }else{
            radius = h;
        }
    std::cout << "radius: " << radius << std::endl;
    }
};
class RectWin : public AppWindow{
    double area;
    public:
    RectWin(int x, int y, int w, int h){
        one->x = x;
        one->y = y;
        one->w = w;
        one->h = h;
        area = w*h;
    }
    RectWin(const AppRect& r)
    {
        one->x = r.x;
        one->y = r.y;
        one->w = r.w;
        one->h = r.h;
        area = r.w*r.h;
    }
    void resize(int w, int h){
        one->w = w;
        one->h = h;
        area = w*h;
        std::cout << "area: " << area << std::endl;
    }
};
#endif