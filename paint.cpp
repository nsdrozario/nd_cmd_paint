#include <iostream>
#include <string>
#include <vector>
#include "headers/paint.h"
#include "headers/file.h"
#include <fstream>

int main(int argc, char *argv[]) {
    std::cout << "Entry point" << std::endl;
    nd_cmd_paint::image_data *img = new nd_cmd_paint::image_data(5,5); // this is just test code
    for (int y=0; y<5; y++) {
        for (int x=0; x<5; x++) {
            img->place_pixel(x,y,1);
        }
    }

    
    std::cout << "Placed pixel in image data" << std::endl;

    img->store_in_file("data.ndcmd_img");

    return 0;

}

