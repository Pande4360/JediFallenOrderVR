#include "..\FUObjectArray.hpp"
#include "EnvQueryDebugHelpers.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryDebugHelpers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryDebugHelpers");
    return result;
}
