#include "..\FUObjectArray.hpp"
#include "FD_StormTrooper_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsTechRT\RsDynamicDeformerParticleSystem.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_DynamicDeformation_Effects_FD_StormTrooper::FD_StormTrooper_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/DynamicDeformation/Effects/FD_StormTrooper.FD_StormTrooper_C");
    return result;
}
