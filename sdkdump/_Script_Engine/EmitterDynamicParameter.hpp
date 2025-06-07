#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct EmitterDynamicParameter {
    private: char pad_0[0x50]; public:
    void* get_ParamName();
    bool get_bUseEmitterTime();
    void set_bUseEmitterTime(bool value);
    bool get_bSpawnTimeOnly();
    void set_bSpawnTimeOnly(bool value);
    void* get_ValueMethod();
    bool get_bScaleVelocityByParamValue();
    void set_bScaleVelocityByParamValue(bool value);
    void* get_ParamValue();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
