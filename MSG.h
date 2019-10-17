

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MSG.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MSG_2061570759_h
#define MSG_2061570759_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

extern "C" {

    extern const char *myStructTYPENAME;

}

struct myStructSeq;
#ifndef NDDS_STANDALONE_TYPE
class myStructTypeSupport;
class myStructDataWriter;
class myStructDataReader;
#endif

class myStruct 
{
  public:
    typedef struct myStructSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef myStructTypeSupport TypeSupport;
    typedef myStructDataWriter DataWriter;
    typedef myStructDataReader DataReader;
    #endif

    DDS_Long   seqId ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* myStruct_get_typecode(void); /* Type code */

DDS_SEQUENCE(myStructSeq, myStruct);

NDDSUSERDllExport
RTIBool myStruct_initialize(
    myStruct* self);

NDDSUSERDllExport
RTIBool myStruct_initialize_ex(
    myStruct* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool myStruct_initialize_w_params(
    myStruct* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void myStruct_finalize(
    myStruct* self);

NDDSUSERDllExport
void myStruct_finalize_ex(
    myStruct* self,RTIBool deletePointers);

NDDSUSERDllExport
void myStruct_finalize_w_params(
    myStruct* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void myStruct_finalize_optional_members(
    myStruct* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool myStruct_copy(
    myStruct* dst,
    const myStruct* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MSG */

