#include "..\FUObjectArray.hpp"
#include "EnvQueryItemType_Actor.hpp"
#include "EnvQueryItemType_ActorBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryItemType_Actor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryItemType_Actor");
    return result;
}
