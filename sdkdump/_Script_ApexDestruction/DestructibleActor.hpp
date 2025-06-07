#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_ApexDestruction {
struct DestructibleComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ApexDestruction {
#pragma pack(push, 1)
struct DestructibleActor : public _Script_Engine::Actor {
    private: char pad_360[0x20]; public:
    _Script_ApexDestruction::DestructibleComponent*& get_DestructibleComponent();
    bool get_bAffectNavigation();
    void set_bAffectNavigation(bool value);
    void* get_OnActorFracture();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x380
#pragma pack(pop)
}
