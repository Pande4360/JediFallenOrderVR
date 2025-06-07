#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Niagara {
struct NiagaraEmitter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraEmitterHandle {
    private: char pad_0[0x30]; public:
    void* get_ID();
    void* get_IdName();
    bool get_bIsEnabled();
    void set_bIsEnabled(bool value);
    void* get_Name();
    _Script_Niagara::NiagaraEmitter*& get_Instance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
