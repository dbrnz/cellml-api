DECLARE_EXTENSION(cuses)
DECLARE_IDL(CUSES)
DECLARE_IDL_DEPENDENCY(AnnoTools)
DECLARE_EXTENSION_END(cuses)

INCLUDE_DIRECTORIES(CUSES/sources)

ADD_LIBRARY(cuses
  CUSES/sources/CUSESImpl.cpp)
INSTALL(TARGETS cuses DESTINATION lib)

DECLARE_BOOTSTRAP("CUSESBootstrap" "CUSES" "CUSESBootstrap" "cellml_services" "createCUSESBootstrap" "CreateCUSESBootstrap" "CUSESBootstrap.hpp" "CUSES/sources")

DECLARE_CPPUNIT_FILE(CUSES)
DECLARE_TEST_LIB(cuses)
