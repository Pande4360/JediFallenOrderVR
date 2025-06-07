#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "RsAISensor.hpp"
#include "RsAISensor_Damage.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISensor_Damage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAISensor_Damage");
    return result;
}
void _Script_RsGameTechRT::RsAISensor_Damage::OnTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
