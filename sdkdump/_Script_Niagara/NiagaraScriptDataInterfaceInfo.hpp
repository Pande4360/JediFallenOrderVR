#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Niagara {
struct NiagaraDataInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraScriptDataInterfaceInfo {
    private: char pad_0[0x40]; public:
    _Script_Niagara::NiagaraDataInterface*& get_DataInterface();
    void* get_Name();
    int32_t& get_UserPtrIdx();
    void* get_Type();
    void* get_RegisteredParameterMapRead();
    void* get_RegisteredParameterMapWrite();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
