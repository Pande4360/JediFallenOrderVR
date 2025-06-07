#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraScript : public _Script_CoreUObject::Object {
    private: char pad_28[0x6a8]; public:
    void* get_Usage();
    int32_t& get_UsageIndex();
    void* get_UsageId();
    int32_t& get_ModuleUsageBitmask();
    void* get_RapidIterationParameters();
    void* get_NumericOutputTypeSelectionMode();
    void* get_ScriptExecutionParamStoreCPU();
    void* get_ScriptExecutionParamStoreGPU();
    void* get_CachedScriptVMId();
    void* get_LastGeneratedVMId();
    void* get_CachedScriptVM();
    void* get_CachedParameterCollectionReferences();
    void* get_CachedDefaultDataInterfaces();
    static _Script_CoreUObject::Class* static_class();
    void OnCompilationComplete();
}; // Size: 0x6d0
#pragma pack(pop)
}
