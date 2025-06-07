#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NiagaraShader {
#pragma pack(push, 1)
struct NiagaraDataInterfaceGPUParamInfo {
    private: char pad_0[0x20]; public:
    void* get_DataInterfaceHLSLSymbol();
    void* get_DIClassName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
