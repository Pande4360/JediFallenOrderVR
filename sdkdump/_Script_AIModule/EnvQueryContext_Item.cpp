#include "..\FUObjectArray.hpp"
#include "EnvQueryContext.hpp"
#include "EnvQueryContext_Item.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryContext_Item::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryContext_Item");
    return result;
}
