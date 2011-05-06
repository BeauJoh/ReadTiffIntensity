
#include "io_png.h"
#include "io_tiff.h"

int main(int argc, char **argv)
{

    uint16 * img = read_tiff((char*)"Tritsmfin-s1051.tif");


    uint16 * normalizedTiff = normalizeData(img);
    
    //uint16 * unnormalizedTiff = unNormalizeData(normalizedTiff);
    
    write_tiff((char*)"Tritsmfin-s1051OUT.tif", normalizedTiff);
    //write_tiff_strip_file((char*)"Tritsmfin-s1051OUT.tif", unnormalizedTiff);
    
    //8 bit image
    //uint16 * img = read_tiff_strip_file((char*)"GMARBLES.TIF");

    //uint16* normalizedImg = normalizeData(img);
    //unsigned short* unnormalizedImg = unNormalizeData(normalizedImg);
    
    //write_tiff_strip_file((char*)"Tritsmfin-s1051OUT.tif", img);
    
    return 0;
}