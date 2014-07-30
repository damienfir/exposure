/* #include "opencv2/core/core.hpp" */
/* #include "opencv2/imgproc/imgproc.hpp" */
/* #include "opencv2/highgui/highgui.hpp" */
/* #include "opencv2/ocl/ocl.hpp" */


class ImageFilter
{
public:
    ImageFilter();
    virtual ~ImageFilter ();

    void blur();

private:
    /* cv::Mat _image; */
};
