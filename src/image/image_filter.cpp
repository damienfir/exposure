#include "image_filter.h"

#include <iostream>


/* using namespace cv; */

ImageFilter::ImageFilter()
{
    /* _image = imread("IMG_5398.thumb.jpg"); */
}

ImageFilter::~ImageFilter()
{}


/* void ImageFilter::blur() */
/* { */
    
/* } */

void ImageFilter::blur()
{
    /* std::cout << "begin filter" << std::endl; */
    /* ocl::oclMat dsrc(_image), dABFilter, dBFilter; */
    /* int ks = 25; */
    /* int sigmacolor = 30; */
    /* int sigmaSpace = 30; */

    /* // ksize is the total width/height of neighborhood used to calculate local variance. */
    /* // sigmaSpace is not a priori related to ksize/2. */
    /* ocl::bilateralFilter(dsrc, dBFilter, ks, sigmacolor, sigmaSpace); */
    /* Mat bFilter = dBFilter; */

    /* ocl::finish(); */

    /* imwrite("filtered.png", bFilter); */
    /* std::cout << "end filter" << std::endl; */
}
