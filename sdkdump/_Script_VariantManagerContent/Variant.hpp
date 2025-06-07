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
struct Actor;
}
namespace _Script_VariantManagerContent {
#pragma pack(push, 1)
struct Variant : public _Script_CoreUObject::Object {
    private: char pad_28[0x28]; public:
    void* get_DisplayText();
    void* get_ObjectBindings();
    static _Script_CoreUObject::Class* static_class();
    void SwitchOn();
    void SetDisplayText(void*& NewDisplayText);
    int32_t GetNumActors();
    void* GetDisplayText();
    _Script_Engine::Actor* GetActor(int32_t ActorIndex);
}; // Size: 0x50
#pragma pack(pop)
}
