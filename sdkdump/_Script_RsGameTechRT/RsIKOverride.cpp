#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKOverride.hpp"
void* _Script_RsGameTechRT::RsIKOverride::get_IkBone() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_RsGameTechRT::RsIKOverride::get_bOverrideBlendInTime() {
    return (*(uint8_t*)((uintptr_t)this + 0xfa + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsIKOverride::get_IkGoal() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_RsGameTechRT::RsIKOverride::get_OffsetBoneNameOverride() {
    return (void*)((uintptr_t)this + 0xf0);
}
bool _Script_RsGameTechRT::RsIKOverride::get_bPlaceOffsetBoneAtGoal() {
    return (*(uint8_t*)((uintptr_t)this + 0xf8 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsIKOverride::set_bPlaceOffsetBoneAtGoal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsIKOverride::get_bIgnoreForHipOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0xf9 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsIKOverride::set_bIgnoreForHipOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsIKOverride::set_bOverrideBlendInTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xfa + 0);
    *(uint8_t*)((uintptr_t)this + 0xfa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsIKOverride::get_CustomBlendInTime() {
    return *(float*)((uintptr_t)this + 0xfc);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKOverride::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsIKOverride");
    return result;
}
