#include <math.h>

double get_box_volume(double length, double width, double height)
{
    return length * width * height;
}

double get_cylinder_volume(double radius, double height)
{

    float radius_f = (float)radius;
    float height_f = (float)height;
    float result = M_PI * pow(radius_f, 2) * height_f;
    return (double)result;
}

double get_sphere_volume(double radius)
{
    double x = 4.0 / 3.0;
    float radius_f = (float)radius;
    float result = x * M_PI * pow(radius_f, 3);
    return (double)result;
}