
#include "io_png.h"
#include "io_tiff.h"

int main(int argc, char **argv)
{
//    if (argc != 3)
//        abort_("Usage: program_name <file_in> <file_out>");
//    
//    read_png_file(argv[1]);
//    process_file();
//    write_png_file(argv[2]);
//    
    //system("pwd");
    //printf("png component of pixel format is sizeof (unsigned char) is %lu * 4", sizeof(unsigned char));
    //printf("tiff pixel format is sizeof (unsigned int (uint32)) is %lu * 4", sizeof(unsigned int));
    //printf("tiff pixel format is sizeof (unsigned int16 (uint16)) is %lu * 1", sizeof(unsigned short));

//    read_png_file((char*)"toucan.png");
//    process_file();
//    write_png_file((char*)"toucan-negative.png");
//    read_tiff_strip_file((char*)"Tritsmfin-s1051.tif");

    //unsigned char* img = read_tiff_rgb_8_bit_from_file((char*)"MARBLES.TIF");
    //write_tiff_rgb_8_bit_from_file((char*)"MARBLESOUT.TIF", img);
    
    //16 bit image
    //uint16 * img = testIn((char*)"Tritsmfin-s1051.tif");
    
    //8 bit image
    //uint16 * img = read_tiff_strip_file((char*)"GMARBLES.TIF");
    //uint16 * img = testIn((char*)"GMARBLES.TIF");
    //uint16 * img = testIn((char*)"MARBLES.TIF");
    uint16 * img = testIn((char*)"GMARBLESNORM.TIF");


    uint16 * normalizedTiff = normalizeData(img);
    
    uint16 * unnormalizedTiff = unNormalizeData(normalizedTiff);
    
    testOut((char*)"GMARBLESNORM.TIF", unnormalizedTiff);
    //write_tiff_strip_file((char*)"Tritsmfin-s1051OUT.tif", unnormalizedTiff);
    
    //8 bit image
    //uint16 * img = read_tiff_strip_file((char*)"GMARBLES.TIF");

    //uint16* normalizedImg = normalizeData(img);
    //unsigned short* unnormalizedImg = unNormalizeData(normalizedImg);
    
    //write_tiff_strip_file((char*)"Tritsmfin-s1051OUT.tif", img);
    
    return 0;
}