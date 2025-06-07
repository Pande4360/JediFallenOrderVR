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
struct SwBTDecorator_CanRunActiveFightBehavior : public _Script_AIModule::BTDecorator {
    private: char pad_68[0x10]; public:
    void* get_ResourceClass();
    float& get_MinCancelDelay();
    float& get_MaxCancelDelay();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
