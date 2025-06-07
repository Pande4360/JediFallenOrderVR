#include "..\FUObjectArray.hpp"
#include "AddRotAndTransOffsetBasedOnLookInput_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "..\_Script_RsGameTechRT\RsCameraInputs.hpp"
#include "..\_Script_RsGameTechRT\RsCameraOutputs.hpp"
float& _Game_GlobalData_Camera_Behaviors_AddRotAndTransOffsetBasedOnLookInput::AddRotAndTransOffsetBasedOnLookInput_C::get_MaxRotationalDistanceVertical() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Game_GlobalData_Camera_Behaviors_AddRotAndTransOffsetBasedOnLookInput::AddRotAndTransOffsetBasedOnLookInput_C::get_MaxRotationalDistanceHorizontal() {
    return *(float*)((uintptr_t)this + 0x30);
}
void _Game_GlobalData_Camera_Behaviors_AddRotAndTransOffsetBasedOnLookInput::AddRotAndTransOffsetBasedOnLookInput_C::ClampAngleHelper(float InputAngle, float BaseAngle, float AngleLimit, float& OutputAngle) {
    return;
}
float& _Game_GlobalData_Camera_Behaviors_AddRotAndTransOffsetBasedOnLookInput::AddRotAndTransOffsetBasedOnLookInput_C::get_MaxTranslationHorizontal() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Game_GlobalData_Camera_Behaviors_AddRotAndTransOffsetBasedOnLookInput::AddRotAndTransOffsetBasedOnLookInput_C::get_PreviousRotation() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Game_GlobalData_Camera_Behaviors_AddRotAndTransOffsetBasedOnLookInput::AddRotAndTransOffsetBasedOnLookInput_C::get_RotationSpeed() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Game_GlobalData_Camera_Behaviors_AddRotAndTransOffsetBasedOnLookInput::AddRotAndTransOffsetBasedOnLookInput_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Camera/Behaviors/AddRotAndTransOffsetBasedOnLookInput.AddRotAndTransOffsetBasedOnLookInput_C");
    return result;
}
void _Game_GlobalData_Camera_Behaviors_AddRotAndTransOffsetBasedOnLookInput::AddRotAndTransOffsetBasedOnLookInput_C::BlueprintUpdate0(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& PreviousOutputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs) {
    return;
}
