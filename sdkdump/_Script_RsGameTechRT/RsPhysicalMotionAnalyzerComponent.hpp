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
struct RsPhysicalMotionAnalyzerComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0xd0]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x240
#pragma pack(pop)
}
