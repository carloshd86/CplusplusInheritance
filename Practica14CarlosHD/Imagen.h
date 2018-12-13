#pragma once

#include "stdafx.h"

class CImagen
{
public:

	enum ImageType
	{
		Jpg,
		Png,
	};
	
	~CImagen();

	int										SetImageFile				(const char *pszFile);
	unsigned int					GetNumPixels				() const;
	unsigned int					GetUncompressedSize	() const;
	const unsigned char *	GetBuffer						() const;
	int										Draw								() const;
	int										InvertImage					();
	ImageType GetImageType() const;

protected:
	CImagen(ImageType imageType);

	unsigned int		m_uResX;
	unsigned int		m_uResY;
	unsigned int		m_uColorBytes;
	unsigned char *	m_pBuffer;
	unsigned int		m_uSize;

private:
	ImageType m_imageType;
};