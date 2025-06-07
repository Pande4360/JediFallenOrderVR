#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NavigationLinkBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NavigationSegmentLink : public NavigationLinkBase {
    private: char pad_38[0x30]; public:
    void* get_LeftStart();
    void* get_LeftEnd();
    void* get_RightStart();
    void* get_RightEnd();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
