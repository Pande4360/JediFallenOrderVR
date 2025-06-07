#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraVMExecutableData {
    private: char pad_0[0x168]; public:
    void* get_ByteCode();
    int32_t& get_NumUserPtrs();
    void* get_Parameters();
    void* get_InternalParameters();
    void* get_DataSetToParameters();
    void* get_Attributes();
    void* get_DataUsage();
    void* get_DataInterfaceInfo();
    void* get_CalledVMExternalFunctions();
    void* get_ReadDataSets();
    void* get_WriteDataSets();
    void* get_StatScopes();
    void* get_LastHlslTranslation();
    void* get_LastHlslTranslationGPU();
    void* get_LastAssemblyTranslation();
    void* get_LastOpCount();
    void* get_DIParamInfo();
    void* get_ParameterCollectionPaths();
    void* get_LastCompileStatus();
    bool get_bReadsAttributeData();
    void set_bReadsAttributeData(bool value);
    void* get_ErrorMsg();
    float& get_CompileTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x168
#pragma pack(pop)
}
