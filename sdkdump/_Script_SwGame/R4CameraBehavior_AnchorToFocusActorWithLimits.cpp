#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_AnchorToFocusActorWithLimits.hpp"
float& _Script_SwGame::R4CameraBehavior_AnchorToFocusActorWithLimits::get_FocusPercentageAtZero() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::R4CameraBehavior_AnchorToFocusActorWithLimits::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_SwGame::R4CameraBehavior_AnchorToFocusActorWithLimits::get_FocusTimeOutDead() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_SwGame::R4CameraBehavior_AnchorToFocusActorWithLimits::get_MaxDistanceToFocus() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_SwGame::R4CameraBehavior_AnchorToFocusActorWithLimits::get_FocusPercentageAtMaxDist() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_SwGame::R4CameraBehavior_AnchorToFocusActorWithLimits::get_MaxHeightToFocus() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_SwGame::R4CameraBehavior_AnchorToFocusActorWithLimits::get_FocusTimeOut() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_SwGame::R4CameraBehavior_AnchorToFocusActorWithLimits::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_SwGame::R4CameraBehavior_AnchorToFocusActorWithLimits::get_BlendPercent() {
    return *(float*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_AnchorToFocusActorWithLimits::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_AnchorToFocusActorWithLimits");
    return result;
}
