#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "RsAbilityEffectTask.hpp"
#include "SwCollisionDamageAETask.hpp"
#include "SwCollisionDamageData.hpp"
_Script_SwGame::SwCollisionDamageData*& _Script_SwGame::SwCollisionDamageAETask::get_DefaultCollisionDamageData() {
    return *(_Script_SwGame::SwCollisionDamageData**)((uintptr_t)this + 0xb8);
}
void _Script_SwGame::SwCollisionDamageAETask::OnBumperTopologyChanged(void* previousMode, void* newMode, float Proximity) {
    return;
}
_Script_CoreUObject::Class* _Script_SwGame::SwCollisionDamageAETask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwCollisionDamageAETask");
    return result;
}
void _Script_SwGame::SwCollisionDamageAETask::OnCapsuleHit(_Script_Engine::PrimitiveComponent* HitComp, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit) {
    return;
}
