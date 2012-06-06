DECLARE_EXTENSION(cevas)
DECLARE_IDL(CeVAS)
DECLARE_IDL_DEPENDENCY(CellML_APISPEC)
DECLARE_EXTENSION_END(cevas)

INCLUDE_DIRECTORIES(CeVAS/sources)

ADD_LIBRARY(cevas
  CeVAS/sources/CeVASImpl.cpp)
INSTALL(TARGETS cevas DESTINATION lib)
SET_TARGET_PROPERTIES(cevas PROPERTIES SOVERSION ${GLOBAL_SOVERSION})
TARGET_LINK_LIBRARIES(cevas cellml ${CMAKE_DL_LIBS})

DECLARE_BOOTSTRAP("CeVASBootstrap" "CeVAS" "CeVASBootstrap" "cellml_services" "createCeVASBootstrap" "CreateCeVASBootstrap" "CeVASBootstrap.hpp" "CeVAS/sources" "cevas")

DECLARE_CPPUNIT_FILE(CeVAS)
DECLARE_TEST_LIB(cevas)
