#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "DismembermentConfiguration.hpp"
void* _Script_RsGameTechRT::DismembermentConfiguration::get_MeshComponentName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::DismembermentConfiguration::get_ImpulseDirection() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_RsGameTechRT::DismembermentConfiguration::get_SkinnedMeshComponent() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_RsGameTechRT::DismembermentConfiguration::get_bChangeToRagdoll() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::DismembermentConfiguration::set_bChangeToRagdoll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::DismembermentConfiguration::get_bApplyRadialImpulse() {
    return (*(uint8_t*)((uintptr_t)this + 0x11 + 0)) & 1 != 0;
}
float& _Script_RsGameTechRT::DismembermentConfiguration::get_ImpulseStrength() {
    return *(float*)((uintptr_t)this + 0x20);
}
void _Script_RsGameTechRT::DismembermentConfiguration::set_bApplyRadialImpulse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11 + 0);
    *(uint8_t*)((uintptr_t)this + 0x11 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::DismembermentConfiguration::get_AnimationToPlay() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::DismembermentConfiguration::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.DismembermentConfiguration");
    return result;
}
