#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundClass : public _Script_CoreUObject::Object {
    private: char pad_28[0x58]; public:
    void* get_Properties();
    void* get_ChildClasses();
    void* get_PassiveSoundMixModifiers();
    _Script_Engine::SoundClass*& get_ParentClass();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
