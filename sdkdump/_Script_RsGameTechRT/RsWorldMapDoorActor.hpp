#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsWorldMapGatewayActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsWorldMapDoorActor : public RsWorldMapGatewayActor {
    private: char pad_390[0x8]; public:
    void* get_DoorType();
    bool get_bIsLocked();
    void set_bIsLocked(bool value);
    bool get_bIsUnlockable();
    void set_bIsUnlockable(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x398
#pragma pack(pop)
}
