#include "..\FUObjectArray.hpp"
#include "VD_BP_Door_Default_C.hpp"
#include "..\_Game_Characters__Shared_Abilities_NewVictimData_VD_Base\VD_Base_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Game_Characters__Shared_Abilities_NewVictimData_VD_BP_Door_Default::VD_BP_Door_Default_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/Abilities/NewVictimData/VD_BP_Door_Default.VD_BP_Door_Default_C");
    return result;
}
