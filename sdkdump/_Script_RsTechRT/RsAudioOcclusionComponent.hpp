#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsAudioOcclusionComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x8]; public:
    float& get_ObstructionPerMeterOverride();
    bool get_IsObstruction();
    void set_IsObstruction(bool value);
    bool get_IsPerMeter();
    void set_IsPerMeter(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x178
#pragma pack(pop)
}
