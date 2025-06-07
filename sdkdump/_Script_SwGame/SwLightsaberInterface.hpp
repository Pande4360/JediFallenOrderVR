#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
#include "SwLightsaberBladeState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwLightsaberInterface : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void SetLightsaberMarksState(bool bEnabled);
    void OverchargeEffect(bool bStart, bool bActivate);
    bool IsBladeExtended();
    _Script_SwGame::SwLightsaberBladeState GetBladeState();
    void ExtendRetractBlade(bool bExtend, bool bInstant);
    void CatchLightsaber(_Script_RsGameTechRT::RsCharacter* CatchingCharacter);
    bool CanBeForcePulledByCharacter(_Script_RsGameTechRT::RsCharacter* PullingCharacter);
}; // Size: 0x28
#pragma pack(pop)
}
