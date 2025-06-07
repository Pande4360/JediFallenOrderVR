#include "..\FUObjectArray.hpp"
#include "AddRotOffsetBasedOnLookInput_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "..\_Script_RsGameTechRT\RsCameraInputs.hpp"
#include "..\_Script_RsGameTechRT\RsCameraOutputs.hpp"
void _Game_GlobalData_Camera_Behaviors_AddRotOffsetBasedOnLookInput::AddRotOffsetBasedOnLookInput_C::BlueprintUpdate0(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& PreviousOutputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs) {
    return;
}
float& _Game_GlobalData_Camera_Behaviors_AddRotOffsetBasedOnLookInput::AddRotOffsetBasedOnLookInput_C::get_MaxRotationalDistance() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Game_GlobalData_Camera_Behaviors_AddRotOffsetBasedOnLookInput::AddRotOffsetBasedOnLookInput_C::get_PreviousRotation() {
    return (void*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Game_GlobalData_Camera_Behaviors_AddRotOffsetBasedOnLookInput::AddRotOffsetBasedOnLookInput_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Camera/Behaviors/AddRotOffsetBasedOnLookInput.AddRotOffsetBasedOnLookInput_C");
    return result;
}
void _Game_GlobalData_Camera_Behaviors_AddRotOffsetBasedOnLookInput::AddRotOffsetBasedOnLookInput_C::ClampAngleHelper(float InputAngle, float BaseAngle, float AngleLimit, float& OutputAngle) {
    return;
}
