#include "..\FUObjectArray.hpp"
#include "BlendBoneByChannelEntry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::BlendBoneByChannelEntry::get_SourceBone() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AnimGraphRuntime::BlendBoneByChannelEntry::get_TargetBone() {
    return (void*)((uintptr_t)this + 0x18);
}
bool _Script_AnimGraphRuntime::BlendBoneByChannelEntry::get_bBlendRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
bool _Script_AnimGraphRuntime::BlendBoneByChannelEntry::get_bBlendTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::BlendBoneByChannelEntry::set_bBlendTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AnimGraphRuntime::BlendBoneByChannelEntry::set_bBlendRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AnimGraphRuntime::BlendBoneByChannelEntry::set_bBlendScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32 + 0);
    *(uint8_t*)((uintptr_t)this + 0x32 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::BlendBoneByChannelEntry::get_bBlendScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x32 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::BlendBoneByChannelEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.BlendBoneByChannelEntry");
    return result;
}
