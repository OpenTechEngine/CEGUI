// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "Texture.pypp.hpp"

namespace bp = boost::python;

struct Texture_wrapper : CEGUI::Texture, bp::wrapper< CEGUI::Texture > {

    Texture_wrapper()
    : CEGUI::Texture()
      , bp::wrapper< CEGUI::Texture >(){
        // null constructor
        
    }

    virtual void blitFromMemory( void const * sourceData, ::CEGUI::Rectf const & area ){
        bp::override func_blitFromMemory = this->get_override( "blitFromMemory" );
        func_blitFromMemory( sourceData, boost::ref(area) );
    }

    virtual void blitToMemory( void * targetData ){
        bp::override func_blitToMemory = this->get_override( "blitToMemory" );
        func_blitToMemory( targetData );
    }

    virtual ::CEGUI::String const & getName(  ) const {
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    virtual ::CEGUI::Sizef const & getOriginalDataSize(  ) const {
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    virtual ::CEGUI::Sizef const & getSize(  ) const {
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    virtual ::CEGUI::Vector2f const & getTexelScaling(  ) const {
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    virtual bool isPixelFormatSupported( ::CEGUI::Texture::PixelFormat const fmt ) const {
        bp::override func_isPixelFormatSupported = this->get_override( "isPixelFormatSupported" );
        return func_isPixelFormatSupported( fmt );
    }

    virtual void loadFromFile( ::CEGUI::String const & filename, ::CEGUI::String const & resourceGroup ){
        bp::override func_loadFromFile = this->get_override( "loadFromFile" );
        func_loadFromFile( boost::ref(filename), boost::ref(resourceGroup) );
    }

    virtual void loadFromMemory( void const * buffer, ::CEGUI::Sizef const & buffer_size, ::CEGUI::Texture::PixelFormat pixel_format ){
        bp::override func_loadFromMemory = this->get_override( "loadFromMemory" );
        func_loadFromMemory( buffer, boost::ref(buffer_size), pixel_format );
    }

};

void register_Texture_class(){

    { //::CEGUI::Texture
        typedef bp::class_< Texture_wrapper, boost::noncopyable > Texture_exposer_t;
        Texture_exposer_t Texture_exposer = Texture_exposer_t( "Texture" );
        bp::scope Texture_scope( Texture_exposer );
        bp::enum_< CEGUI::Texture::PixelFormat>("PixelFormat")
            .value("PF_RGB", CEGUI::Texture::PF_RGB)
            .value("PF_RGBA", CEGUI::Texture::PF_RGBA)
            .value("PF_RGBA_4444", CEGUI::Texture::PF_RGBA_4444)
            .value("PF_RGB_565", CEGUI::Texture::PF_RGB_565)
            .value("PF_PVRTC2", CEGUI::Texture::PF_PVRTC2)
            .value("PF_PVRTC4", CEGUI::Texture::PF_PVRTC4)
            .value("PF_RGB_DXT1", CEGUI::Texture::PF_RGB_DXT1)
            .value("PF_RGBA_DXT1", CEGUI::Texture::PF_RGBA_DXT1)
            .value("PF_RGBA_DXT3", CEGUI::Texture::PF_RGBA_DXT3)
            .value("PF_RGBA_DXT5", CEGUI::Texture::PF_RGBA_DXT5)
            .export_values()
            ;
        { //::CEGUI::Texture::blitFromMemory
        
            typedef void ( ::CEGUI::Texture::*blitFromMemory_function_type )( void const *,::CEGUI::Rectf const & ) ;
            
            Texture_exposer.def( 
                "blitFromMemory"
                , bp::pure_virtual( blitFromMemory_function_type(&::CEGUI::Texture::blitFromMemory) )
                , ( bp::arg("sourceData"), bp::arg("area") )
                , "*!\n\
                \n\
                    Performs an area memory blit to the texture\n\
            \n\
                @param sourceData\n\
                    input data, the size must match area described by the given Rect\n\
            \n\
                @param area\n\
                    area where the blit will happen\n\
            \n\
                \note The pixel format must match current Texture's pixel format!\n\
                *\n" );
        
        }
        { //::CEGUI::Texture::blitToMemory
        
            typedef void ( ::CEGUI::Texture::*blitToMemory_function_type )( void * ) ;
            
            Texture_exposer.def( 
                "blitToMemory"
                , bp::pure_virtual( blitToMemory_function_type(&::CEGUI::Texture::blitToMemory) )
                , ( bp::arg("targetData") )
                , "*!\n\
                \n\
                  Performs a complete blit from the texture surface to memory\n\
            \n\
                @param\n\
                  targetData the buffer where the target is stored\n\
            \n\
                \note\n\
                  You have to (correctly) preallocate the target buffer!\n\
                *\n" );
        
        }
        { //::CEGUI::Texture::getName
        
            typedef ::CEGUI::String const & ( ::CEGUI::Texture::*getName_function_type )(  ) const;
            
            Texture_exposer.def( 
                "getName"
                , bp::pure_virtual( getName_function_type(&::CEGUI::Texture::getName) )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Returns the name given to the texture when it was created.\n\
            \n\
                @return\n\
                    Reference to a String object that holds the name of the texture.\n\
                *\n" );
        
        }
        { //::CEGUI::Texture::getOriginalDataSize
        
            typedef ::CEGUI::Sizef const & ( ::CEGUI::Texture::*getOriginalDataSize_function_type )(  ) const;
            
            Texture_exposer.def( 
                "getOriginalDataSize"
                , bp::pure_virtual( getOriginalDataSize_function_type(&::CEGUI::Texture::getOriginalDataSize) )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Returns the original pixel size of the data loaded into the texture.\n\
            \n\
                @return\n\
                    reference to a Size object that describes the original size, in pixels,\n\
                    of the data loaded into the texture.\n\
                *\n" );
        
        }
        { //::CEGUI::Texture::getSize
        
            typedef ::CEGUI::Sizef const & ( ::CEGUI::Texture::*getSize_function_type )(  ) const;
            
            Texture_exposer.def( 
                "getSize"
                , bp::pure_virtual( getSize_function_type(&::CEGUI::Texture::getSize) )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Returns the current pixel size of the texture.\n\
            \n\
                @return\n\
                    Reference to a Size object that describes the size of the texture in\n\
                    pixels.\n\
                *\n" );
        
        }
        { //::CEGUI::Texture::getTexelScaling
        
            typedef ::CEGUI::Vector2f const & ( ::CEGUI::Texture::*getTexelScaling_function_type )(  ) const;
            
            Texture_exposer.def( 
                "getTexelScaling"
                , bp::pure_virtual( getTexelScaling_function_type(&::CEGUI::Texture::getTexelScaling) )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Returns pixel to texel scale values that should be used for converting\n\
                    pixel values to texture co-ords.\n\
            \n\
                @return\n\
                    Reference to a Vector2 object that describes the scaling values required\n\
                    to accurately map pixel positions to texture co-ordinates.\n\
                *\n" );
        
        }
        { //::CEGUI::Texture::isPixelFormatSupported
        
            typedef bool ( ::CEGUI::Texture::*isPixelFormatSupported_function_type )( ::CEGUI::Texture::PixelFormat const ) const;
            
            Texture_exposer.def( 
                "isPixelFormatSupported"
                , bp::pure_virtual( isPixelFormatSupported_function_type(&::CEGUI::Texture::isPixelFormatSupported) )
                , ( bp::arg("fmt") )
                , "*!\n\
                \n\
                    Return whether the specified pixel format is supported by the system for\n\
                    the CEGUI.Texture implementation.\n\
            \n\
                    The result of this call will vary according to the implementaion API\n\
                    and the capabilities of the hardware.\n\
            \n\
                \note\n\
                    Whether the CEGUI system as a whole will make use of support for any\n\
                    given pixel format will depend upon that format being recognised and\n\
                    supported by both the renderer module implementation and the ImageCodec\n\
                    module that is used to load texture data.\n\
            \n\
                @param fmt\n\
                    One of the PixelFormat enumerated values specifying the pixel format\n\
                    that is to be tested.\n\
            \n\
                @return\n\
                    - true if the specified PixelFormat is supported.\n\
                    - false if the specified PixelFormat is not supported.\n\
                *\n" );
        
        }
        { //::CEGUI::Texture::loadFromFile
        
            typedef void ( ::CEGUI::Texture::*loadFromFile_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            Texture_exposer.def( 
                "loadFromFile"
                , bp::pure_virtual( loadFromFile_function_type(&::CEGUI::Texture::loadFromFile) )
                , ( bp::arg("filename"), bp::arg("resourceGroup") )
                , "*!\n\
                \n\
                    Loads the specified image file into the texture.  The texture is resized\n\
                    as required to hold the image.\n\
            \n\
                @param filename\n\
                    The filename of the image file that is to be loaded into the texture\n\
            \n\
                @param resourceGroup\n\
                    Resource group identifier to be passed to the resource provider when\n\
                    loading the image file.\n\
            \n\
                @return\n\
                    Nothing.\n\
                *\n" );
        
        }
        { //::CEGUI::Texture::loadFromMemory
        
            typedef void ( ::CEGUI::Texture::*loadFromMemory_function_type )( void const *,::CEGUI::Sizef const &,::CEGUI::Texture::PixelFormat ) ;
            
            Texture_exposer.def( 
                "loadFromMemory"
                , bp::pure_virtual( loadFromMemory_function_type(&::CEGUI::Texture::loadFromMemory) )
                , ( bp::arg("buffer"), bp::arg("buffer_size"), bp::arg("pixel_format") ) );
        
        }
    }

}
