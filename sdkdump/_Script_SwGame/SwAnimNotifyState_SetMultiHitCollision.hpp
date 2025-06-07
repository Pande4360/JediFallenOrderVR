#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SwAnimNotifyState_SetHitCollisionBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAnimNotifyState_SetMultiHitCollision : public SwAnimNotifyState_SetHitCollisionBase {
    private: char pad_c0[0x60]; public:
    void* get_CollisionParts();
    void* get_CollisionPartsName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
