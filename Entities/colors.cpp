#include "colors.h"

Colors::Colors()
{
    //ctor
}

Colors::Colors(unsigned int r, unsigned int g , unsigned int b)
{
    this->SetValues(r,g,b);
}

Colors::Colors(unsigned int r, unsigned int g , unsigned int b, unsigned int a)
{
    this->SetValues(r,g,b);
    this->alpha = a;
}

Colors::~Colors()
{
}

void Colors::SetValues(unsigned int &r, unsigned int &g , unsigned int &b)
{
    this->red = r;
    this->green = g;
    this->blue = b;
}
