#ifndef file_h 
#define file_h
namespace nd_cmd_paint {
    class image_data {

    private:

        vector<vector<int>> data;

    public:

        int size_x;
        int size_y;

        image_data(int sx, int sy);

        Pixel get_pixel(int x, int y);

        void place_pixel(int x, int y, int c);

        void store_in_file(char *file);
};

}

#endif
    


