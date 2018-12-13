// Practica14CarlosHD.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "IImageUtils.h"
#include "Png.h"
#include "Jpg.h"


int main()
{
	CImagen * tImages[5];
	
	tImages[0] = new CPng();
	tImages[1] = new CJpg();
	tImages[2] = new CJpg();
	tImages[3] = new CPng();
	tImages[4] = new CJpg();

	IImageUtils::RemovePngAlphaChannel(tImages, 5);

	printf("\n\nPress Enter to quit...");
	getchar();

    return 0;
}

