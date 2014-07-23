## description
Photo management tool for Linux using OpenCL.


## features and tools

- import
    - from camera (libgphoto)
    - from folder
- demosaic raw (dcraw)
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
- gui (gtk3)
    - possibly custom theme
    - Glade to build interface
    - keyboard shortcuts
- export (libjpeg, libpng, libtiff)
- exif (libexif, Exiv2)
- xmp for non-destructive editing (rapidxml, pugixml)
- file browser (standard library)
- image viewer with annotations (cairo)
    - ratings
    - clipped highlights & shadows
- color management (SampleICC)
- tagging


## ideas
- arrange by folder, but able to view all the pictures at once


## filters

- implemented in modules (plugins), see darktable
- support Intel, Nvidia, AMD
