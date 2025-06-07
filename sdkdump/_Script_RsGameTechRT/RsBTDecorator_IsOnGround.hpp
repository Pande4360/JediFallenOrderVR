#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTDecorator.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTDecorator_IsOnGround : public _Script_AIModule::BTDecorator {
    private: char pad_68[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
    void OnTopologyChanged(void* previousMode, void* newMode, float Proximity);
}; // Size: 0x78
#pragma pack(pop)
}
