
#include "io_png.h"
#include "io_tiff.h"

int main(int argc, char **argv)
{
    //Read TIFF Image
    uint16 * img = read_tiff_strip_file((char*)"GMARBLES.TIF");
    
    //normalizeData TIFF Image
    normalizeData(img);
    
    //normalized TIFF Image to file
    write_tiff_strip_file((char*)"GMARBLESNORM.TIF", img);
    
    return 0;
}