#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct InterpGroup;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InterpGroupInst : public _Script_CoreUObject::Object {
    private: char pad_28[0x20]; public:
    _Script_Engine::InterpGroup*& get_Group();
    _Script_Engine::Actor*& get_GroupActor();
    void* get_TrackInst();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
