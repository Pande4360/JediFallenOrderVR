#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_CombatAutoAdjust.hpp"
float& _Script_SwGame::R4CameraBehavior_CombatAutoAdjust::get_NoAdjustTime() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_SwGame::R4CameraBehavior_CombatAutoAdjust::get_YawDeltaTarget() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::R4CameraBehavior_CombatAutoAdjust::get_YawDeltaIncrement() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_SwGame::R4CameraBehavior_CombatAutoAdjust::get_SmoothingPercent() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_SwGame::R4CameraBehavior_CombatAutoAdjust::get_SmoothingTime() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_SwGame::R4CameraBehavior_CombatAutoAdjust::get_Timeout() {
    return *(float*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_CombatAutoAdjust::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_CombatAutoAdjust");
    return result;
}
