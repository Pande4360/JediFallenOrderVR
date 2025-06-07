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
struct NiagaraVMExecutableDataId {
    private: char pad_0[0x68]; public:
    void* get_CompilerVersionID();
    void* get_ScriptUsageType();
    void* get_ScriptUsageTypeID();
    void* get_AdditionalDefines();
    void* get_BaseScriptID();
    void* get_ReferencedDependencyIds();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
