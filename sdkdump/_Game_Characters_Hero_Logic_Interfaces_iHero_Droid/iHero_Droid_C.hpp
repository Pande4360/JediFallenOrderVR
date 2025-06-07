#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Interfaces_iHero_Droid {
#pragma pack(push, 1)
struct iHero_Droid_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void BuddySpawnAndSetAttachPoint(void* AttachPoint, bool LockAttachPoint);
    void BuddyLight(bool On);
    void BuddyAcquire();
    void BuddySpawn(bool spawnDetached);
    void BuddyAllowDetach(bool Allow);
}; // Size: 0x28
#pragma pack(pop)
}
