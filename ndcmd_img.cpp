#include <iostream>
#include <vector>
#include <fstream>
#include "headers/paint.h"
#include "headers/file.h"

nd_cmd_paint::image_data::image_data(int sx, int sy) {
     size_x = sx;
    size_y = sy;
}
nd_cmd_paint::Pixel* nd_cmd_paint::image_data::get_pixel(int x, int y) {
    nd_cmd_paint::Pixel *p = new nd_cmd_paint::Pixel(x,y,0);
    p->color = this->data[y][x];
    return p;
}

void nd_cmd_paint::image_data::place_pixel(int x, int y, int c) {
    this->data[y][x] = c;
}

void nd_cmd_paint::image_data::store_in_file(const char *file) {

    std::ofstream f;
    f.open(file, std::ios::binary | std::ios::out | std::ios::app);

    if (f.is_open()) {

    f.write((char*)this, (int)sizeof(this));

    }

    f.close();

}
