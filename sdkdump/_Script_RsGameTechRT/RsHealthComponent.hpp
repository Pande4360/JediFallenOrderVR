#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsHealthComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x58]; public:
    void* get_OnDiedEvent_Internal();
    void* get_OnDiedEvent();
    void* get_OnPostDeathEvent();
    void* get_OnRevivedEvent();
    float& get_MaxHealth();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c8
#pragma pack(pop)
}
