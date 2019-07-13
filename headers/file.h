#ifndef file_h 
#define file_h

#include <vector>

namespace nd_cmd_paint {
    
    class image_data {

    public:
        image_data();
        
        int size_x;
        int size_y;
        std::vector< std::vector<int> > data;
        image_data(int sx, int sy);

        nd_cmd_paint::Pixel* get_pixel(int x, int y);

        void place_pixel(int x, int y, int c);

        void store_in_file(const char *file);
};

}

#endif
    


