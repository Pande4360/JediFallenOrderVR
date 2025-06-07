#include "..\FUObjectArray.hpp"
#include "DD_Hero_Footstep_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsTechRT\RsDynamicDeformerParticleSystem.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_DynamicDeformation_Effects_DD_Hero_Footstep::DD_Hero_Footstep_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/DynamicDeformation/Effects/DD_Hero_Footstep.DD_Hero_Footstep_C");
    return result;
}
