
// Copyright (c) 2008-2014 Claudiu Ciutacu
// Test CxxDocObject successfully compiled

// ..... Permanent link: http://rextester.com/AGNO20976 <--- Live Code

//TDM-GCC 4.8.1 32-bit Release
//g++  4.9.1
//cxdocobj.000.a02

// other

///////////////////////////////////////////////////////////

#define VER_MAJOR "000"
#define VER_MINOR "000"

#define VER_ALPHA
#define VER_BETA
#define VER_RELEASE

#define COMPILED "02"

#ifdef VER_ALPHA
#define VERSION VER_MAJOR "." VER_MINOR ".A" COMPILED
#elif VER_BETA
#define VERSION VER_MAJOR "." VER_MINOR ".B" COMPILED
#else
#define VERSION VER_MAJOR "." VER_MINOR ".R" COMPILED
#endif

