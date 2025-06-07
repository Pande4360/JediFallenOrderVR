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
struct NiagaraVariableInfo {
    private: char pad_0[0x50]; public:
    void* get_Variable();
    void* get_Definition();
    _Script_Niagara::NiagaraDataInterface*& get_DataInterface();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
