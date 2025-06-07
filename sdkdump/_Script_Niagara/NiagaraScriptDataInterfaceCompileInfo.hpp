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
struct NiagaraScriptDataInterfaceCompileInfo {
    private: char pad_0[0x50]; public:
    void* get_Name();
    int32_t& get_UserPtrIdx();
    void* get_Type();
    void* get_RegisteredFunctions();
    void* get_RegisteredParameterMapRead();
    void* get_RegisteredParameterMapWrite();
    bool get_bIsPlaceholder();
    void set_bIsPlaceholder(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
