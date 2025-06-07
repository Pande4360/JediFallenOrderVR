#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "RsBTTask_SyncOnPOI.hpp"
void _Script_RsGameTechRT::RsBTTask_SyncOnPOI::OnSyncEnding(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_SyncOnPOI::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_SyncOnPOI");
    return result;
}
void _Script_RsGameTechRT::RsBTTask_SyncOnPOI::OnAITakingDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
