#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Actor.hpp"
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NavigationObjectBase : public Actor {
    private: char pad_360[0x28]; public:
    _Script_Engine::CapsuleComponent*& get_CapsuleComponent();
    _Script_Engine::BillboardComponent*& get_GoodSprite();
    _Script_Engine::BillboardComponent*& get_BadSprite();
    bool get_bIsPIEPlayerStart();
    void set_bIsPIEPlayerStart(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x388
#pragma pack(pop)
}
