#include "..\FUObjectArray.hpp"
#include "BTTaskNode.hpp"
#include "BTTask_PlayAnimation.hpp"
#include "BehaviorTreeComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_AIModule::BehaviorTreeComponent*& _Script_AIModule::BTTask_PlayAnimation::get_MyOwnerComp() {
    return *(_Script_AIModule::BehaviorTreeComponent**)((uintptr_t)this + 0x80);
}
_Script_Engine::AnimationAsset*& _Script_AIModule::BTTask_PlayAnimation::get_AnimationToPlay() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x70);
}
bool _Script_AIModule::BTTask_PlayAnimation::get_bLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void _Script_AIModule::BTTask_PlayAnimation::set_bNonBlocking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_AIModule::BTTask_PlayAnimation::set_bLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::BTTask_PlayAnimation::get_bNonBlocking() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 2 != 0;
}
_Script_CoreUObject::Class* _Script_AIModule::BTTask_PlayAnimation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTTask_PlayAnimation");
    return result;
}
_Script_Engine::SkeletalMeshComponent*& _Script_AIModule::BTTask_PlayAnimation::get_CachedSkelMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x88);
}
