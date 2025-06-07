#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AudioComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_FacialAnimation {
#pragma pack(push, 1)
struct AudioCurveSourceComponent : public _Script_Engine::AudioComponent {
    private: char pad_6e0[0x40]; public:
    void* get_CurveSourceBindingName();
    float& get_CurveSyncOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x720
#pragma pack(pop)
}
