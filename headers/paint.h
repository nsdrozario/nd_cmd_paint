#ifndef paint_h 
#define paint_h
namespace nd_cmd_paint {

     class Pixel {

        public: 

            int color; // Windows uses a single integer to represent colors in the command line
            int x;
            int y;

            Pixel (int x, int y, int c) {
               color = c;
               x = x;
               y = y;
            }
    };

    void draw_pixel_screen(nd_cmd_paint::Pixel p);


} 
#endif