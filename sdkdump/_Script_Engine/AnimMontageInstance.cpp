#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimMontage.hpp"
#include "AnimMontageInstance.hpp"
float& _Script_Engine::AnimMontageInstance::get_DefaultBlendTimeMultiplier() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_Engine::AnimMontage*& _Script_Engine::AnimMontageInstance::get_Montage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::AnimMontageInstance::get_NextSections() {
    return (void*)((uintptr_t)this + 0xf8);
}
float& _Script_Engine::AnimMontageInstance::get_Position() {
    return *(float*)((uintptr_t)this + 0x138);
}
bool _Script_Engine::AnimMontageInstance::get_bPlaying() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Engine::AnimMontageInstance::set_bPlaying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AnimMontageInstance::get_PrevSections() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_Engine::AnimMontageInstance::get_ActiveStateBranchingPoints() {
    return (void*)((uintptr_t)this + 0x128);
}
float& _Script_Engine::AnimMontageInstance::get_Playrate() {
    return *(float*)((uintptr_t)this + 0x13c);
}
void* _Script_Engine::AnimMontageInstance::get_Blend() {
    return (void*)((uintptr_t)this + 0x140);
}
int32_t& _Script_Engine::AnimMontageInstance::get_DisableRootMotionCount() {
    return *(int32_t*)((uintptr_t)this + 0x198);
}
_Script_CoreUObject::Class* _Script_Engine::AnimMontageInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimMontageInstance");
    return result;
}
