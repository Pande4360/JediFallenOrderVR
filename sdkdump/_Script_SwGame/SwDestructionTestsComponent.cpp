#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "SwDestructionTestsComponent.hpp"
_Script_Engine::AnimationAsset*& _Script_SwGame::SwDestructionTestsComponent::get_AnimationToPlay01() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_SwGame::SwDestructionTestsComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwDestructionTestsComponent");
    return result;
}
void _Script_SwGame::SwDestructionTestsComponent::ExecuteDestructionTestScenario02_PhysicsAsset(void* ActorNamePrefix, float DelayBeforeStartingPhysics) {
    return;
}
void _Script_SwGame::SwDestructionTestsComponent::ExecuteDestructionTestScenario01_APEXDestruction(void* ActorNamePrefix, float BaseDamage, float DamageRadius, float ImpulseStrength, bool bFullDamage) {
    return;
}
