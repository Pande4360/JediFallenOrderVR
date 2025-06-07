#include "..\FUObjectArray.hpp"
#include "EnvQueryItemType_Direction.hpp"
#include "EnvQueryItemType_VectorBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryItemType_Direction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryItemType_Direction");
    return result;
}
