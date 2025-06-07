#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsWorldMapHologramSettingsBase : public _Script_Engine::DataAsset {
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::LinearColor GetUnlockedDoorColor();
    _Script_CoreUObject::LinearColor GetUnlockableDoorColor();
    _Script_CoreUObject::LinearColor GetLockedDoorColor();
    _Script_CoreUObject::LinearColor GetGatewayColor();
}; // Size: 0x30
#pragma pack(pop)
}
