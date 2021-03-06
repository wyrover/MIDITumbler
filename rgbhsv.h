#ifndef RGBHSV_H
#define RGBHSV_H
#include <float.h>
#include <cmath>

#ifdef WIN32
#define isnan(x) _isnan(x)
#endif

typedef struct {
    double r;       // percent
    double g;       // percent
    double b;       // percent
} rgbColour;

typedef struct {
    double h;       // angle in degrees
    double s;       // percent
    double v;       // percent
} hsvColour;

hsvColour      rgb2hsv(rgbColour in);
rgbColour      hsv2rgb(hsvColour in);
#endif