#include "..\FUObjectArray.hpp"
#include "EnvQueryItemType.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryItemType::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryItemType");
    return result;
}
