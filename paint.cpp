#include <iostream>
#include <string>
#include <vector>
#include "headers/paint.h"
#include "headers/file.h"
#include <fstream>

int main(int argc, char *argv[]) {
    std::cout << "Entry point" << std::endl;
    nd_cmd_paint::image_data *img = new nd_cmd_paint::image_data(1,1); // this is just test code
    img->place_pixel(0,0,1);
    
    std::cout << "Placed pixel in image data" << std::endl;

    img->store_in_file("data.ndcmd_img");

    return 0;

}

