#include "..\FUObjectArray.hpp"
#include "CameraYawLock_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "..\_Script_RsGameTechRT\RsCameraInputs.hpp"
#include "..\_Script_RsGameTechRT\RsCameraOutputs.hpp"
float& _Game_GlobalData_Camera_Behaviors_CameraYawLock::CameraYawLock_C::get_InterpSpeed() {
    return *(float*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Game_GlobalData_Camera_Behaviors_CameraYawLock::CameraYawLock_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Camera/Behaviors/CameraYawLock.CameraYawLock_C");
    return result;
}
void _Game_GlobalData_Camera_Behaviors_CameraYawLock::CameraYawLock_C::BlueprintUpdate0(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& PreviousOutputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs) {
    return;
}
