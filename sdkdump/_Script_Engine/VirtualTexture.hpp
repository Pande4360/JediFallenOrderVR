#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct VirtualTextureSpace;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct VirtualTexture : public _Script_CoreUObject::Object {
    private: char pad_28[0x28]; public:
    _Script_Engine::VirtualTextureSpace*& get_Space();
    bool get_Rebuild();
    void set_Rebuild(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
