#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimState_Swim.hpp"
bool _Script_RsGameTechRT::AnimState_Swim::get_AnticipateSwimAfterCinematic() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
float& _Script_RsGameTechRT::AnimState_Swim::get_DesiredPitchAngle() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_RsGameTechRT::AnimState_Swim::get_CurrentState() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_RsGameTechRT::AnimState_Swim::set_AnticipateSwimAfterCinematic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::AnimState_Swim::get_DiveUpAnimationTime() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_RsGameTechRT::AnimState_Swim::get_DiveDownAnimationTime() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_RsGameTechRT::AnimState_Swim::get_BoostUnderwaterAnimationTime() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::AnimState_Swim::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.AnimState_Swim");
    return result;
}
