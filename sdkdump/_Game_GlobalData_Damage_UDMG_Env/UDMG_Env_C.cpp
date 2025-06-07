#include "..\FUObjectArray.hpp"
#include "UDMG_Env_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DamageType.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_Damage_UDMG_Env::UDMG_Env_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Damage/UDMG_Env.UDMG_Env_C");
    return result;
}
