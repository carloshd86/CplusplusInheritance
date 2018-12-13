#include "stdafx.h"
#include "IImageUtils.h"
#include <assert.h>
#include "Png.h"

/**
Removes the alpha channel from all png images in the table.

@param tImages Pointer to the image table
@param size Size of the image table

@return Result of the operation (0 if succeeded)
*/
int IImageUtils::RemovePngAlphaChannel(CImagen * const * tImages, unsigned int size)
{
	assert(tImages);

	int result = 0;

	CImagen * const * pEnd = (tImages + (size - 1));
	
#ifdef _DEBUG
	int i = 0;
#endif

	while (tImages <= pEnd)
	{
		if (CImagen::ImageType::Png == (*tImages)->GetImageType())
		{
#ifdef _DEBUG
			printf("\nImage %d: removed alpha channel\n", i);
#endif
			(static_cast<CPng *>(*tImages))->RemoveAlphaChannel();
		}
#ifdef _DEBUG
		else
			printf("\nImage %d: was not a Png\n", i);
		i++;
#endif
		tImages++;
	}

	return result;
}