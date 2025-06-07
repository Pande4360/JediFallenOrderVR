#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNotifyState.hpp"
#include "AnimNotifyState_Trail.hpp"
#include "AnimSequenceBase.hpp"
#include "ParticleSystem.hpp"
#include "SkeletalMeshComponent.hpp"
void _Script_Engine::AnimNotifyState_Trail::set_bRecycleSpawnedSystems(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::ParticleSystem*& _Script_Engine::AnimNotifyState_Trail::get_PSTemplate() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x30);
}
void* _Script_Engine::AnimNotifyState_Trail::get_FirstSocketName() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::AnimNotifyState_Trail::get_SecondSocketName() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::AnimNotifyState_Trail::get_WidthScaleMode() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::AnimNotifyState_Trail::get_WidthScaleCurve() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_Engine::AnimNotifyState_Trail::get_bRecycleSpawnedSystems() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::AnimNotifyState_Trail::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimNotifyState_Trail");
    return result;
}
_Script_Engine::ParticleSystem* _Script_Engine::AnimNotifyState_Trail::OverridePSTemplate(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
