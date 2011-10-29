// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "UnifiedDim.pypp.hpp"

namespace bp = boost::python;

struct UnifiedDim_wrapper : CEGUI::UnifiedDim, bp::wrapper< CEGUI::UnifiedDim > {

    UnifiedDim_wrapper(CEGUI::UnifiedDim const & arg )
    : CEGUI::UnifiedDim( arg )
      , bp::wrapper< CEGUI::UnifiedDim >(){
        // copy constructor
        
    }

    UnifiedDim_wrapper(::CEGUI::UDim const & value, ::CEGUI::DimensionType dim )
    : CEGUI::UnifiedDim( boost::ref(value), dim )
      , bp::wrapper< CEGUI::UnifiedDim >(){
        // constructor
    
    }

    virtual ::CEGUI::BaseDim * clone_impl(  ) const {
        if( bp::override func_clone_impl = this->get_override( "clone_impl" ) )
            return func_clone_impl(  );
        else{
            return this->CEGUI::UnifiedDim::clone_impl(  );
        }
    }
    
    virtual ::CEGUI::BaseDim * default_clone_impl(  ) const {
        return CEGUI::UnifiedDim::clone_impl( );
    }

    virtual float getValue_impl( ::CEGUI::Window const & wnd ) const {
        if( bp::override func_getValue_impl = this->get_override( "getValue_impl" ) )
            return func_getValue_impl( boost::ref(wnd) );
        else{
            return this->CEGUI::UnifiedDim::getValue_impl( boost::ref(wnd) );
        }
    }
    
    virtual float default_getValue_impl( ::CEGUI::Window const & wnd ) const {
        return CEGUI::UnifiedDim::getValue_impl( boost::ref(wnd) );
    }

    virtual float getValue_impl( ::CEGUI::Window const & wnd, ::CEGUI::Rectf const & container ) const {
        if( bp::override func_getValue_impl = this->get_override( "getValue_impl" ) )
            return func_getValue_impl( boost::ref(wnd), boost::ref(container) );
        else{
            return this->CEGUI::UnifiedDim::getValue_impl( boost::ref(wnd), boost::ref(container) );
        }
    }
    
    virtual float default_getValue_impl( ::CEGUI::Window const & wnd, ::CEGUI::Rectf const & container ) const {
        return CEGUI::UnifiedDim::getValue_impl( boost::ref(wnd), boost::ref(container) );
    }

    virtual void writeXMLElementAttributes_impl( ::CEGUI::XMLSerializer & xml_stream ) const {
        if( bp::override func_writeXMLElementAttributes_impl = this->get_override( "writeXMLElementAttributes_impl" ) )
            func_writeXMLElementAttributes_impl( boost::ref(xml_stream) );
        else{
            this->CEGUI::UnifiedDim::writeXMLElementAttributes_impl( boost::ref(xml_stream) );
        }
    }
    
    virtual void default_writeXMLElementAttributes_impl( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::UnifiedDim::writeXMLElementAttributes_impl( boost::ref(xml_stream) );
    }

    virtual void writeXMLElementName_impl( ::CEGUI::XMLSerializer & xml_stream ) const {
        if( bp::override func_writeXMLElementName_impl = this->get_override( "writeXMLElementName_impl" ) )
            func_writeXMLElementName_impl( boost::ref(xml_stream) );
        else{
            this->CEGUI::UnifiedDim::writeXMLElementName_impl( boost::ref(xml_stream) );
        }
    }
    
    virtual void default_writeXMLElementName_impl( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::UnifiedDim::writeXMLElementName_impl( boost::ref(xml_stream) );
    }

};

void register_UnifiedDim_class(){

    { //::CEGUI::UnifiedDim
        typedef bp::class_< UnifiedDim_wrapper, bp::bases< CEGUI::BaseDim > > UnifiedDim_exposer_t;
        UnifiedDim_exposer_t UnifiedDim_exposer = UnifiedDim_exposer_t( "UnifiedDim", "*!\n\
        \n\
            Dimension type that represents an Unified dimension.  Implements BaseDim interface.\n\
        *\n", bp::init< CEGUI::UDim const &, CEGUI::DimensionType >(( bp::arg("value"), bp::arg("dim") ), "*!\n\
                \n\
                    Constructor.\n\
        \n\
                @param value\n\
                    UDim holding the value to assign to this UnifiedDim.\n\
        \n\
                @param dim\n\
                    DimensionType value indicating what this UnifiedDim is to represent.  This is required\n\
                    because we need to know what part of the base Window that the UDim scale component is\n\
                    to operate against.\n\
                *\n") );
        bp::scope UnifiedDim_scope( UnifiedDim_exposer );
        { //::CEGUI::UnifiedDim::clone_impl
        
            typedef ::CEGUI::BaseDim * ( UnifiedDim_wrapper::*clone_impl_function_type )(  ) const;
            
            UnifiedDim_exposer.def( 
                "clone_impl"
                , clone_impl_function_type( &UnifiedDim_wrapper::default_clone_impl )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::UnifiedDim::getValue_impl
        
            typedef float ( UnifiedDim_wrapper::*getValue_impl_function_type )( ::CEGUI::Window const & ) const;
            
            UnifiedDim_exposer.def( 
                "getValue_impl"
                , getValue_impl_function_type( &UnifiedDim_wrapper::default_getValue_impl )
                , ( bp::arg("wnd") )
                , "Implementation of the base class interface\n" );
        
        }
        { //::CEGUI::UnifiedDim::getValue_impl
        
            typedef float ( UnifiedDim_wrapper::*getValue_impl_function_type )( ::CEGUI::Window const &,::CEGUI::Rectf const & ) const;
            
            UnifiedDim_exposer.def( 
                "getValue_impl"
                , getValue_impl_function_type( &UnifiedDim_wrapper::default_getValue_impl )
                , ( bp::arg("wnd"), bp::arg("container") )
                , "Implementation of the base class interface\n" );
        
        }
        { //::CEGUI::UnifiedDim::writeXMLElementAttributes_impl
        
            typedef void ( UnifiedDim_wrapper::*writeXMLElementAttributes_impl_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            UnifiedDim_exposer.def( 
                "writeXMLElementAttributes_impl"
                , writeXMLElementAttributes_impl_function_type( &UnifiedDim_wrapper::default_writeXMLElementAttributes_impl )
                , ( bp::arg("xml_stream") ) );
        
        }
        { //::CEGUI::UnifiedDim::writeXMLElementName_impl
        
            typedef void ( UnifiedDim_wrapper::*writeXMLElementName_impl_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            UnifiedDim_exposer.def( 
                "writeXMLElementName_impl"
                , writeXMLElementName_impl_function_type( &UnifiedDim_wrapper::default_writeXMLElementName_impl )
                , ( bp::arg("xml_stream") ) );
        
        }
    }

}