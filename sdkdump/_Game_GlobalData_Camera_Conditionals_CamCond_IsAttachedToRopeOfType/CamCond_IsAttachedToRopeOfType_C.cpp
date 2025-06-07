#include "..\FUObjectArray.hpp"
#include "CamCond_IsAttachedToRopeOfType_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraInputs.hpp"
#include "..\_Script_RsGameTechRT\RsCameraOutputs.hpp"
#include "..\_Script_SwGame\RsCameraConditional.hpp"
void* _Game_GlobalData_Camera_Conditionals_CamCond_IsAttachedToRopeOfType::CamCond_IsAttachedToRopeOfType_C::get_RopeTypes() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Game_GlobalData_Camera_Conditionals_CamCond_IsAttachedToRopeOfType::CamCond_IsAttachedToRopeOfType_C::BlueprintConditional0(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs) {
    return;
}
_Script_CoreUObject::Class* _Game_GlobalData_Camera_Conditionals_CamCond_IsAttachedToRopeOfType::CamCond_IsAttachedToRopeOfType_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Camera/Conditionals/CamCond_IsAttachedToRopeOfType.CamCond_IsAttachedToRopeOfType_C");
    return result;
}
