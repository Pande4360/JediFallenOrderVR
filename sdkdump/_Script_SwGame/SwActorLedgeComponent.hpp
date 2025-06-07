#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsActorLedgeComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
struct SwActorLedgeSettings;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwActorLedgeComponent : public _Script_RsGameTechRT::RsActorLedgeComponent {
    static _Script_CoreUObject::Class* static_class();
    void OnEnterLedgeNavState();
    _Script_SwGame::SwActorLedgeSettings* GetSwLedgeSettings();
}; // Size: 0x49c0
#pragma pack(pop)
}
