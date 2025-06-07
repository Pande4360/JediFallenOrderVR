#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AnimNotifyState.hpp"
#include "AnimSequenceBase.hpp"
#include "SkeletalMeshComponent.hpp"
void* _Script_Engine::AnimNotifyState::get_RequiredSignificance() {
    return (void*)((uintptr_t)this + 0x29);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNotifyState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimNotifyState");
    return result;
}
bool _Script_Engine::AnimNotifyState::Received_NotifyBegin(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
bool _Script_Engine::AnimNotifyState::Received_NotifyEnd(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
bool _Script_Engine::AnimNotifyState::Received_NotifyTick(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float FrameDeltaTime) {
    return;
}
void* _Script_Engine::AnimNotifyState::GetNotifyName() {
    return;
}
