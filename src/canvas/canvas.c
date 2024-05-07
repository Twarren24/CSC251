#include <malloc.h>
#include "canvas.h"
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

static char* unsigned_int_to_char_array(unsigned int);

Canvas canvas(unsigned int w, unsigned int h) {    
    // store canvas by r, g, b in rows
    unsigned int* pixels = calloc(3 * w * h, sizeof(unsigned int));
    
    Canvas c;
    c.width = w;
    c.height = h;
    c.pixels = pixels; // Assign the allocated pixels to the canvas
    return c;
}

Canvas write_pixel(Canvas ca, unsigned int x, unsigned int y, Color co)
{
    // offset into struct's pixel pointer to pixel to be written
    unsigned int* pix_ptr = ca.pixels + 3 * (y * ca.width + x);

    // Write color values to the specified pixel
    pix_ptr[0] = co.red;
    pix_ptr[1] = co.green;
    pix_ptr[2] = co.blue;

    return ca;
}

Color pixel_at(Canvas ca, unsigned int x, unsigned int y)
{
    // offset into struct's pixel pointer to pixel to be read
    unsigned int* pix_ptr = ca.pixels + 3 * (y * ca.width + x);

    Color pixel_at;
    pixel_at.red = pix_ptr[0];
    pixel_at.green = pix_ptr[1];
    pixel_at.blue = pix_ptr[2];
    return pixel_at;
}

char* canvas_to_ppm(Canvas ca)
{
    const unsigned int HEADER_MAX_LEN = 100;
    char header[HEADER_MAX_LEN];
    sprintf(header, "P3\n%d %d\n255\n\0", ca.width, ca.height);
    // count the header bytes, i.e. chars
    unsigned int hbytes = strlen(header);

    char* ppm = calloc((hbytes + 3 * 3 * ca.width * ca.height), sizeof(char));

    char* ppm_ptr = ppm;

    for (int i = 0; i < ca.width * ca.height * 3; i += 3) {
        // Convert RGB values to text format and append to ppm string
        ppm_ptr += sprintf(ppm_ptr, "%d %d %d\n", ca.pixels[i], ca.pixels[i+1], ca.pixels[i+2]);
    }
    return ppm;
}

/* utility for conversion of unsigned int to char array */
static char* unsigned_int_to_char_array(unsigned int num)
{
    /* function only needs to expect numbers from 0 - 255 */
    assert(num <= 255 && num >= 0);

    unsigned int digit0 = num % 10; num /= 10;
    unsigned int digit1 = num % 10; num /= 10;
    unsigned int digit2 = num % 10; 

    // ADD YOUR CODE HERE, hint use sprintf
}
