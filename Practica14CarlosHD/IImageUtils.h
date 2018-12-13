#pragma once
#include "Imagen.h"

namespace IImageUtils
{
	int RemovePngAlphaChannel(CImagen * const * tImages, unsigned int size);
}