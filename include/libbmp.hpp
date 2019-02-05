/****************************************************************************\
 *
 *                         libbmp
 *
\****************************************************************************/

#ifndef LIBBMP_HPP
#define LIBBMP_HPP

#if defined (WIN32) && defined(BUILD_SHARED_LIBS)
  #if defined (_MSC_VER)
    #pragma warning(disable: 4251)
  #endif
  #if defined(EXPORT_LIBBMP)
    #define LIBBMP_EXPORT __declspec(dllexport)
  #else
    #define LIBBMP_EXPORT __declspec(dllimport)
  #endif
#else
    #define LIBBMP_EXPORT
#endif

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

class BmpObject
{
  public:

    explicit         BmpObject (void) ;
    virtual         ~BmpObject (void) ;

    virtual void     setData   (void * data,uint32_t size) ;
    virtual void   * data      (void) ;
    virtual uint32_t size      (void) ;

  protected:

    void *   bmpData  ;
    uint32_t dataSize ;

  private:

} ;

#endif
