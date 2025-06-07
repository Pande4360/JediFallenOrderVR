#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsCharacterAnimDataBase.hpp"
float& _Script_RsGameTechRT::RsCharacterAnimDataBase::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_RsGameTechRT::RsCharacterAnimDataBase::get_StartTime() {
    return *(float*)((uintptr_t)this + 0x8);
}
bool _Script_RsGameTechRT::RsCharacterAnimDataBase::get_PlayRandomAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsCharacterAnimDataBase::set_PlayRandomAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsCharacterAnimDataBase::get_Playrate() {
    return *(float*)((uintptr_t)this + 0x10);
}
bool _Script_RsGameTechRT::RsCharacterAnimDataBase::get_bStopAnimOnAbort() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsCharacterAnimDataBase::set_bStopAnimOnAbort(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsCharacterAnimDataBase::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x1c);
}
int32_t& _Script_RsGameTechRT::RsCharacterAnimDataBase::get_LoopCount() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
float& _Script_RsGameTechRT::RsCharacterAnimDataBase::get_BlendOutTriggerTime() {
    return *(float*)((uintptr_t)this + 0x24);
}
void* _Script_RsGameTechRT::RsCharacterAnimDataBase::get_SlotNodeName() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_RsGameTechRT::RsCharacterAnimDataBase::get_BlendSpaceInput() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_RsGameTechRT::RsCharacterAnimDataBase::get_bUseMontage() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsCharacterAnimDataBase::set_bUseMontage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsCharacterAnimDataBase::get_bUseBlendSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsCharacterAnimDataBase::set_bUseBlendSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCharacterAnimDataBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsCharacterAnimDataBase");
    return result;
}
