#include "..\FUObjectArray.hpp"
#include "VD_Base_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SwGame\SwAbilityVictimData.hpp"
_Script_CoreUObject::Class* _Game_Characters__Shared_Abilities_NewVictimData_VD_Base::VD_Base_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/Abilities/NewVictimData/VD_Base.VD_Base_C");
    return result;
}
