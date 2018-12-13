#include "Imagen.h"

class CPng : public CImagen
{
public:
	CPng();

	int SetPngFile(const char *pszFile);
	int RemoveAlphaChannel();

private:
	int UncompressImage();
};