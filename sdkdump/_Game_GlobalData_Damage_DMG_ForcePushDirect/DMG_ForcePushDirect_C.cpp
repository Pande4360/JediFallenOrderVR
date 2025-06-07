#include "..\FUObjectArray.hpp"
#include "DMG_ForcePushDirect_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DamageType.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_Damage_DMG_ForcePushDirect::DMG_ForcePushDirect_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Damage/DMG_ForcePushDirect.DMG_ForcePushDirect_C");
    return result;
}
