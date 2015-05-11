#include "memControl.h"

// deblur main function
// input: blur image
// output: clear image
// height: image height
// width: image width
// ms: multi-scale number
// iter: iteration number
// psf: blur kernel size

void deblur(Matrix *input,Matrix *&output,int ms,int iter,int psf);


// image resize main fun
// input: image
// simg: resize image
// scale: 

void imresize(Matrix *input,Matrix *&output,double scale);