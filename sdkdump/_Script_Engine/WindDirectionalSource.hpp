#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Info.hpp"
namespace _Script_Engine {
struct WindDirectionalSourceComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct WindDirectionalSource : public Info {
    private: char pad_360[0x8]; public:
    _Script_Engine::WindDirectionalSourceComponent*& get_Component();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x368
#pragma pack(pop)
}
