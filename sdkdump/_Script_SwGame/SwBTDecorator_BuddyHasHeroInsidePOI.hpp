#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTDecorator.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwBTDecorator_BuddyHasHeroInsidePOI : public _Script_AIModule::BTDecorator {
    private: char pad_68[0x8]; public:
    float& get_CheckRadiusCoefficient();
    float& get_CheckRadiusConstant();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
