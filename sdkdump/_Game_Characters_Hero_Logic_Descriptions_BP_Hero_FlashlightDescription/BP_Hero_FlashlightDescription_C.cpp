#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_BlockDescription\BP_Hero_BlockDescription_C.hpp"
#include "BP_Hero_FlashlightDescription_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_FlashlightDescription::BP_Hero_FlashlightDescription_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_FlashlightDescription.BP_Hero_FlashlightDescription_C");
    return result;
}
