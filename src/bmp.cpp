#include "libbmp.hpp"

#pragma pack(push,1)

typedef struct        {
  uint8_t magic [ 2 ] ; /* the magic number used to identify the BMP file:
                           0x42 0x4D (Hex code points for B and M).
                           The following entries are possible:
                           BM - Windows 3.1x, 95, NT, ... etc
                           BA - OS/2 Bitmap Array
                           CI - OS/2 Color Icon
                           CP - OS/2 Color Pointer
                           IC - OS/2 Icon
                           PT - OS/2 Pointer. */
  uint32_t size       ;  /* the size of the BMP file in bytes */
  uint16_t creator1   ;  /* reserved. */
  uint16_t creator2   ;  /* reserved. */
  uint32_t offset     ;  /* the offset, i.e. starting address,
                            of the byte where the bitmap data can be found. */
} BmpHeader           ;

#pragma pack(pop)

BmpObject:: BmpObject (void)
{
  bmpData  = nullptr ;
  dataSize = 0       ;
}

BmpObject::~BmpObject (void)
{
}

void BmpObject::setData(void * data,uint32_t size)
{
  bmpData  = data ;
  dataSize = size ;
}

void * BmpObject::data(void)
{
  return bmpData ;
}

uint32_t BmpObject::size(void)
{
  return dataSize ;
}
