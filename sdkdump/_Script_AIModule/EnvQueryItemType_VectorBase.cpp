#include "..\FUObjectArray.hpp"
#include "EnvQueryItemType.hpp"
#include "EnvQueryItemType_VectorBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryItemType_VectorBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryItemType_VectorBase");
    return result;
}
