set(CMAKE_CXX_STANDARD 14)
#if (CMAKE_COMPILER_IS_GNUCC)
#    # the following is optimization micromanagement that made better code for x86
#    # SET(CMAKE_CXX_FLAGS "-D NDEBUG -O3 -Wall -Wextra -pedantic -fvisibility=hidden -fomit-frame-pointer -momit-leaf-frame-pointer -fweb  -ftracer" )
#
#    # Define GNU C++ defines for both Debug and Release
#    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra -pedantic")
#
#    # Define specific Debug settings.
#    set (CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")
#
#    # Define specific Release settings.
#    set (CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -D NDEBUG -O3")
#ENDIF ()

## Define specific Debug settings.
#set (CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")
#
## Define specific Release settings.
#set (CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -D NDEBUG -O3")

if(NOT CMAKE_BUILD_TYPE)

  set(CMAKE_BUILD_TYPE Release)
  
endif(NOT CMAKE_BUILD_TYPE)

include_regular_expression("^.*$")

# Defines the source code for the library
option (BUILD_SHARED_LIBS "Build CharLS with shared libraries." OFF)
option (BUILD_TESTING     "Build tests"                         ON)




#CharLS Library
set(CHARLS_SRCS
        CharLS/interface.cpp
        CharLS/jpegls.cpp
        CharLS/jpegmarkersegment.cpp
        CharLS/jpegstreamreader.cpp
        CharLS/jpegstreamwriter.cpp
        CharLS/charls.h
        CharLS/publictypes.h
        CharLS/colortransform.h
        CharLS/context.h
        CharLS/contextrunmode.h
        CharLS/decoderstrategy.h
        CharLS/defaulttraits.h
        CharLS/encoderstrategy.h
        CharLS/jlscodecfactory.h
        CharLS/jpegimagedatasegment.h
        CharLS/jpegmarkercode.h
        CharLS/jpegmarkersegment.h
        CharLS/jpegsegment.h
        CharLS/jpegstreamreader.h
        CharLS/jpegstreamwriter.h
        CharLS/lookuptable.h
        CharLS/losslesstraits.h
        CharLS/processline.h
        CharLS/scan.h
        CharLS/util.h
 )

#libijg8 library
set(LIBIJG8_SRCS
        libijg8/jaricom.c
        libijg8/jcapimin.c
        libijg8/jcapistd.c
        libijg8/jcarith.c
        libijg8/jccoefct.c
        libijg8/jccolor.c
        libijg8/jcdctmgr.c
        libijg8/jcdiffct.c
        libijg8/jchuff.c
        libijg8/jcinit.c
        libijg8/jclhuff.c
        libijg8/jclossls.c
        libijg8/jclossy.c
        libijg8/jcmainct.c
        libijg8/jcmarker.c
        libijg8/jcmaster.c
        libijg8/jcodec.c
        libijg8/jcomapi.c
        libijg8/jcparam.c
        libijg8/jcphuff.c
        libijg8/jcpred.c
        libijg8/jcprepct.c
        libijg8/jcsample.c
        libijg8/jcscale.c
        libijg8/jcshuff.c
        libijg8/jctrans.c
        libijg8/jdapimin.c
        libijg8/jdapistd.c
        libijg8/jdarith.c
        libijg8/jdatadst.c
        libijg8/jdatasrc.c
        libijg8/jdcoefct.c
        libijg8/jdcolor.c
        libijg8/jddctmgr.c
        libijg8/jddiffct.c
        libijg8/jdhuff.c
        libijg8/jdinput.c
        libijg8/jdlhuff.c
        libijg8/jdlossls.c
        libijg8/jdlossy.c
        libijg8/jdmainct.c
        libijg8/jdmarker.c
        libijg8/jdmaster.c
        libijg8/jdmerge.c
        libijg8/jdphuff.c
        libijg8/jdpostct.c
        libijg8/jdpred.c
        libijg8/jdsample.c
        libijg8/jdscale.c
        libijg8/jdshuff.c
        libijg8/jdtrans.c
        libijg8/jerror.c
        libijg8/jfdctflt.c
        libijg8/jfdctfst.c
        libijg8/jfdctint.c
        libijg8/jidctflt.c
        libijg8/jidctfst.c
        libijg8/jidctint.c
        libijg8/jidctred.c
        libijg8/jmemmgr.c
        libijg8/jmemnobs.c
        libijg8/jquant1.c
        libijg8/jquant2.c
        libijg8/jutils.c
)

#libijg12 library
set(LIBIJG12_SRCS
        libijg12/jaricom.c
        libijg12/jcapimin.c
        libijg12/jcapistd.c
        libijg12/jcarith.c
        libijg12/jccoefct.c
        libijg12/jccolor.c
        libijg12/jcdctmgr.c
        libijg12/jcdiffct.c
        libijg12/jchuff.c
        libijg12/jcinit.c
        libijg12/jclhuff.c
        libijg12/jclossls.c
        libijg12/jclossy.c
        libijg12/jcmainct.c
        libijg12/jcmarker.c
        libijg12/jcmaster.c
        libijg12/jcodec.c
        libijg12/jcomapi.c
        libijg12/jcparam.c
        libijg12/jcphuff.c
        libijg12/jcpred.c
        libijg12/jcprepct.c
        libijg12/jcsample.c
        libijg12/jcscale.c
        libijg12/jcshuff.c
        libijg12/jctrans.c
        libijg12/jdapimin.c
        libijg12/jdapistd.c
        libijg12/jdarith.c
        libijg12/jdatadst.c
        libijg12/jdatasrc.c
        libijg12/jdcoefct.c
        libijg12/jdcolor.c
        libijg12/jddctmgr.c
        libijg12/jddiffct.c
        libijg12/jdhuff.c
        libijg12/jdinput.c
        libijg12/jdlhuff.c
        libijg12/jdlossls.c
        libijg12/jdlossy.c
        libijg12/jdmainct.c
        libijg12/jdmarker.c
        libijg12/jdmaster.c
        libijg12/jdmerge.c
        libijg12/jdphuff.c
        libijg12/jdpostct.c
        libijg12/jdpred.c
        libijg12/jdsample.c
        libijg12/jdscale.c
        libijg12/jdshuff.c
        libijg12/jdtrans.c
        libijg12/jerror.c
        libijg12/jfdctflt.c
        libijg12/jfdctfst.c
        libijg12/jfdctint.c
        libijg12/jidctflt.c
        libijg12/jidctfst.c
        libijg12/jidctint.c
        libijg12/jidctred.c
        libijg12/jmemmgr.c
        libijg12/jmemnobs.c
        libijg12/jquant1.c
        libijg12/jquant2.c
        libijg12/jutils.c
)

#libijg12 library
set(LIBIJG16_SRCS
        libijg16/jaricom.c
        libijg16/jcapimin.c
        libijg16/jcapistd.c
        libijg16/jcarith.c
        libijg16/jccoefct.c
        libijg16/jccolor.c
        libijg16/jcdctmgr.c
        libijg16/jcdiffct.c
        libijg16/jchuff.c
        libijg16/jcinit.c
        libijg16/jclhuff.c
        libijg16/jclossls.c
        libijg16/jclossy.c
        libijg16/jcmainct.c
        libijg16/jcmarker.c
        libijg16/jcmaster.c
        libijg16/jcodec.c
        libijg16/jcomapi.c
        libijg16/jcparam.c
        libijg16/jcphuff.c
        libijg16/jcpred.c
        libijg16/jcprepct.c
        libijg16/jcsample.c
        libijg16/jcscale.c
        libijg16/jcshuff.c
        libijg16/jctrans.c
        libijg16/jdapimin.c
        libijg16/jdapistd.c
        libijg16/jdarith.c
        libijg16/jdatadst.c
        libijg16/jdatasrc.c
        libijg16/jdcoefct.c
        libijg16/jdcolor.c
        libijg16/jddctmgr.c
        libijg16/jddiffct.c
        libijg16/jdhuff.c
        libijg16/jdinput.c
        libijg16/jdlhuff.c
        libijg16/jdlossls.c
        libijg16/jdlossy.c
        libijg16/jdmainct.c
        libijg16/jdmarker.c
        libijg16/jdmaster.c
        libijg16/jdmerge.c
        libijg16/jdphuff.c
        libijg16/jdpostct.c
        libijg16/jdpred.c
        libijg16/jdsample.c
        libijg16/jdscale.c
        libijg16/jdshuff.c
        libijg16/jdtrans.c
        libijg16/jerror.c
        libijg16/jfdctflt.c
        libijg16/jfdctfst.c
        libijg16/jfdctint.c
        libijg16/jidctflt.c
        libijg16/jidctfst.c
        libijg16/jidctint.c
        libijg16/jidctred.c
        libijg16/jmemmgr.c
        libijg16/jmemnobs.c
        libijg16/jquant1.c
        libijg16/jquant2.c
        libijg16/jutils.c
)

#OpenJPEG Library
set(OPENJPEG_SRCS
        OpenJPEG/bio.c
        OpenJPEG/cio.c
        OpenJPEG/dwt.c
        OpenJPEG/event.c
        OpenJPEG/image.c
        OpenJPEG/j2k.c
        OpenJPEG/j2k_lib.c
        OpenJPEG/jp2.c
        OpenJPEG/jpt.c
        OpenJPEG/mct.c
        OpenJPEG/mqc.c
        OpenJPEG/openjpeg.c
        OpenJPEG/pi.c
        OpenJPEG/raw.c
        OpenJPEG/t1.c
        OpenJPEG/t2.c
        OpenJPEG/tcd.c
        OpenJPEG/tgt.c
        OpenJPEG/cidx_manager.c
        OpenJPEG/phix_manager.c
        OpenJPEG/ppix_manager.c
        OpenJPEG/thix_manager.c
        OpenJPEG/tpix_manager.c
        OpenJPEG/openjpeg.h
)

#FILE(GLOB  HEADERS include/*.h)
#FILE(GLOB  IMPLS impl/*.cpp)
#FILE(GLOB  SRCS  src/*.cpp)
set(CROSSPLATFORM_SRCS
        Dicom.Imaging.Codec.JpegLS.cpp
        Dicom.Imaging.Codec.Jpeg2000.cpp
        Dicom.Imaging.Codec.Jpeg_8.cpp
        Dicom.Imaging.Codec.Jpeg_12.cpp
        Dicom.Imaging.Codec.Jpeg_16.cpp

        include/Person.h
        src/Person.cpp
        impl/personImpl.cpp
        include/personImpl.h
        src/DicomTag.cpp
        include/DicomTag.h
        include/comm.h
        include/DicomDictionaryEntry.h
        src/DicomVM.cpp
        include/DicomVM.h
        src/DicomVR.cpp
        include/DicomVR.h
        src/comm.cpp
        src/DicomReader.cpp
        include/DicomReader.h
        src/DicomFileReader.cpp
        include/DicomFileReader.h
        src/DataSet.cpp
        include/DataSet.h
        include/OutOfException.h
        src/DicomHeaderParser.cpp
        include/DicomHeaderParser.h
        src/DicomItem.cpp
        include/DicomItem.h
        src/ExplicitVrReader.cpp
        src/ImplicitVrReader.cpp
        include/ExplicitVrReader.h
        include/ImplicitVrReader.h
        src/TagValueReader.cpp
        include/TagValueReader.h
        include/dicts.h src/DicomDictionary.cpp
        include/DicomDictionary.h
        src/dicts.cpp src/tagConstant.cpp
        src/DicomUID.cpp
        include/DicomUID.h
        src/DicomTS.cpp
        src/TransferFactory.cpp
        include/TransferFactory.h
        include/FileHelper.h
        src/FileHelper.cpp

        include/Endian.h
        src/Endian.cpp
        )


add_library(Dicom.Native-linux64 SHARED

        ${OPENJPEG_SRCS} ${LIBIJG16_SRCS} ${LIBIJG12_SRCS} ${LIBIJG8_SRCS} ${CHARLS_SRCS}
        ${CROSSPLATFORM_SRCS}

)

#Setting properties for shared o dynamic library 
set_target_properties(Dicom.Native-linux64
  PROPERTIES
  LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
  PREFIX ""
)

