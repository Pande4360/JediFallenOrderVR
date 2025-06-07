#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsNavCurrentComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x10]; public:
    void* get_Direction();
    float& get_Intensity();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x180
#pragma pack(pop)
}
