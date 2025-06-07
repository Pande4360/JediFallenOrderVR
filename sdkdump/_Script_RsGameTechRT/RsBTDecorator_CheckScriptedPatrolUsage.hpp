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
struct RsBTDecorator_CheckScriptedPatrolUsage : public _Script_AIModule::BTDecorator {
    private: char pad_68[0x8]; public:
    void* get_PatrolPathUsage();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
