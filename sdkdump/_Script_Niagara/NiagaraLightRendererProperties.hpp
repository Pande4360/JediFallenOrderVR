#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraRendererProperties.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraLightRendererProperties : public NiagaraRendererProperties {
    private: char pad_30[0x1c0]; public:
    float& get_RadiusScale();
    void* get_ColorAdd();
    void* get_PositionBinding();
    void* get_ColorBinding();
    void* get_RadiusBinding();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1f0
#pragma pack(pop)
}
