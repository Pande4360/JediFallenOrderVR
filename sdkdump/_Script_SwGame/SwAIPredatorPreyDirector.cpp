#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_RsGameTechRT\RsAIController.hpp"
#include "SwAIPredatorPreyDirector.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwAIPredatorPreyDirector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAIPredatorPreyDirector");
    return result;
}
void _Script_SwGame::SwAIPredatorPreyDirector::OnTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_SwGame::SwAIPredatorPreyDirector::OnAwarenessStateChanged(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState) {
    return;
}
