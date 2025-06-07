#include "..\FUObjectArray.hpp"
#include "DmgTypeBP_Environmental_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DamageType.hpp"
_Script_CoreUObject::Class* _Engine_EngineDamageTypes_DmgTypeBP_Environmental::DmgTypeBP_Environmental_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Engine/EngineDamageTypes/DmgTypeBP_Environmental.DmgTypeBP_Environmental_C");
    return result;
}
