#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Niagara {
struct NiagaraScript;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraEmitterScriptProperties {
    private: char pad_0[0x28]; public:
    _Script_Niagara::NiagaraScript*& get_Script();
    void* get_EventReceivers();
    void* get_EventGenerators();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
