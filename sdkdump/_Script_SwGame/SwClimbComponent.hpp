#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsClimbComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
struct SwClimbSettings;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwClimbComponent : public _Script_RsGameTechRT::RsClimbComponent {
    static _Script_CoreUObject::Class* static_class();
    void OnStaminaMeterEmptied(void* ResponsibleStaminaName, float TimeUntilForceRegen);
    void OnEnterClimbNavState();
    bool IsCurrentAttachmentClimbingClawsOnly();
    _Script_SwGame::SwClimbSettings* GetSwClimbSettings();
}; // Size: 0x3ac0
#pragma pack(pop)
}
