#include "..\FUObjectArray.hpp"
#include "DialogueOffsetModifier_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "..\_Script_RsGameTechRT\RsCameraInputs.hpp"
#include "..\_Script_RsGameTechRT\RsCameraOutputs.hpp"
float& _Game_GlobalData_Camera_Behaviors_DialogueOffsetModifier::DialogueOffsetModifier_C::get_XOffsetExtra() {
    return *(float*)((uintptr_t)this + 0x30);
}
void _Game_GlobalData_Camera_Behaviors_DialogueOffsetModifier::DialogueOffsetModifier_C::CalculateOffset(_Script_CoreUObject::Vector FocusLocation, _Script_CoreUObject::Vector ViewTargetLocation, _Script_CoreUObject::Vector AnchorPos, _Script_CoreUObject::Rotator CameraRotation, float& XOffset, float& YOffset) {
    return;
}
float& _Game_GlobalData_Camera_Behaviors_DialogueOffsetModifier::DialogueOffsetModifier_C::get_YOffsetExtra() {
    return *(float*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Game_GlobalData_Camera_Behaviors_DialogueOffsetModifier::DialogueOffsetModifier_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Camera/Behaviors/DialogueOffsetModifier.DialogueOffsetModifier_C");
    return result;
}
void _Game_GlobalData_Camera_Behaviors_DialogueOffsetModifier::DialogueOffsetModifier_C::AngleBetweenTwoVectors(_Script_CoreUObject::Vector Vector_A, _Script_CoreUObject::Vector Vector_B, _Script_CoreUObject::Vector Vector_B_Right, float& Angle, float& Sign) {
    return;
}
void _Game_GlobalData_Camera_Behaviors_DialogueOffsetModifier::DialogueOffsetModifier_C::BlueprintUpdate0(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& PreviousOutputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs) {
    return;
}
