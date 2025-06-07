#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DamageEvent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PointDamageEvent : public DamageEvent {
    private: char pad_10[0xa8]; public:
    float& get_Damage();
    void* get_ShotDirection();
    void* get_HitInfo();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
