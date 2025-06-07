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
struct RsWorldMapDoorComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x8]; public:
    bool get_bIsLocked();
    void set_bIsLocked(bool value);
    bool get_bIsUnlockable();
    void set_bIsUnlockable(bool value);
    void* get_DoorType();
    bool get_bExcludeFromWorldMap();
    void set_bExcludeFromWorldMap(bool value);
    static _Script_CoreUObject::Class* static_class();
    void BroadcastDoorUnlocked();
    void BroadcastDoorLocked();
}; // Size: 0x178
#pragma pack(pop)
}
