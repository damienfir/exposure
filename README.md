## description
Photo management tool for Linux using OpenCL.


## features and tools

- import
    - from camera (libgphoto)
    - from folder
- demosaic raw (dcraw) [ok]
- image processing filters (OpenCL-based IP library: CLIPP)
    - white balance
    - exposure
    - levels
    - crop & rotate
    - curves
    - denoising
    - vignetting
    - color balance
    - B&W
- gui (gtk3, gtkmm)
    - possibly custom theme
    - keyboard shortcuts
- export (libjpeg, libpng, libtiff)
- exif (libexif, Exiv2)
- xmp for non-destructive editing (rapidxml, pugixml)
- file browser (tinydir)
- image viewer with annotations (cairo)
    - ratings
    - clipped highlights & shadows
- color management (SampleICC)
- tagging
- storing library (jansson)


## ideas
- arrange by folder, but able to view all the pictures at once


## filters

- implemented in modules (plugins), see darktable
- support Intel, Nvidia, AMD
