#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTTaskNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTTask_JumpTo : public _Script_AIModule::BTTaskNode {
    private: char pad_70[0x80]; public:
    void* get_TargetLocationKey();
    void* get_JumpAnimation();
    void* get_LandAnimation();
    static _Script_CoreUObject::Class* static_class();
    void OnTopologyChanged(void* previousMode, void* newMode, float Proximity);
}; // Size: 0xf0
#pragma pack(pop)
}
