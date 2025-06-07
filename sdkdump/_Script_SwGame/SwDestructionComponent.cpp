#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "SwDestructionComponent.hpp"
void _Script_SwGame::SwDestructionComponent::PlayPartOfAnimation(_Script_Engine::SkeletalMeshComponent* SkeletalMeshComponentToPlayAnimation, float TimeToPlay) {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Script_SwGame::SwDestructionComponent::get_DebugPerformanceSkeletalMeshComponent() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x188);
}
_Script_Engine::SkeletalMeshComponent*& _Script_SwGame::SwDestructionComponent::get_TargetSkeletalMeshComponent() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_SwGame::SwDestructionComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwDestructionComponent");
    return result;
}
void _Script_SwGame::SwDestructionComponent::AdvanceAnimationFrames(_Script_Engine::SkeletalMeshComponent* SkeletalMeshComponentToPlayAnimation, int32_t NumberOfFramesToAdvance) {
    return;
}
