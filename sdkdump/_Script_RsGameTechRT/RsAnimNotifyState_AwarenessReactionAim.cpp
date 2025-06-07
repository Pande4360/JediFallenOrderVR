#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "RsAnimNotifyState_AwarenessReactionAim.hpp"
float& _Script_RsGameTechRT::RsAnimNotifyState_AwarenessReactionAim::get_BeginTime() {
    return *(float*)((uintptr_t)this + 0x38);
}
bool _Script_RsGameTechRT::RsAnimNotifyState_AwarenessReactionAim::get_bEnsureFinalDirection() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
float& _Script_RsGameTechRT::RsAnimNotifyState_AwarenessReactionAim::get_TotalLerpTime() {
    return *(float*)((uintptr_t)this + 0x34);
}
void _Script_RsGameTechRT::RsAnimNotifyState_AwarenessReactionAim::set_bEnsureFinalDirection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAnimNotifyState_AwarenessReactionAim::get_bUseFixedLerpTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAnimNotifyState_AwarenessReactionAim::set_bUseFixedLerpTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimNotifyState_AwarenessReactionAim::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAnimNotifyState_AwarenessReactionAim");
    return result;
}
