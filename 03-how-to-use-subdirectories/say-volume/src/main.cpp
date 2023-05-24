#include <iostream>
#include <volume.h>

int main()
{
    std::cout << "Volume Box 3 x 5 x 6 = " << get_box_volume(3.0, 5.0, 6.0) << std::endl;
    std::cout << "Volume cylinder radius 7 and height 10 = " << get_cylinder_volume(7.0, 10.0) << std::endl;
    std::cout << "Volume sphere radius 7 = " << get_sphere_volume(7.0) << std::endl;
    return 0;
}