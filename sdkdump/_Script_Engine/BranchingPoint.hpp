#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimLinkableElement.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BranchingPoint : public AnimLinkableElement {
    private: char pad_30[0x10]; public:
    void* get_EventName();
    float& get_DisplayTime();
    float& get_TriggerTimeOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
