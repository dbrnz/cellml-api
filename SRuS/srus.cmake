DECLARE_EXTENSION(srus)
DECLARE_IDL(SRuS)
DECLARE_EXTENSION_END(srus)

INCLUDE_DIRECTORIES(SRuS/sources)

ADD_LIBRARY(srus
  SRuS/SRuSImpl.cpp)

DECLARE_BOOTSTRAP("SRuSBootstrap" "SRuS" "Bootstrap" "SRuS" "createSRuSBootstrap" "CreateSRuSBootstrap" "SRuSBootstrap.hpp")

DECLARE_CPPUNIT_FILE(SRuS)
DECLARE_TEST_LIB(srus)
