#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsCameraBehavior.hpp"
#include "RsCameraInputs.hpp"
#include "RsCameraOutputs.hpp"
void _Script_RsGameTechRT::RsCameraBehavior::BlueprintUpdate(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& PreviousOutputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs) {
    return;
}
void _Script_RsGameTechRT::RsCameraBehavior::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsCameraBehavior::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCameraBehavior::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsCameraBehavior");
    return result;
}
float _Script_RsGameTechRT::RsCameraBehavior::GetRotationSpeedYaw(_Script_RsGameTechRT::RsCameraInputs& Inputs) {
    return;
}
bool _Script_RsGameTechRT::RsCameraBehavior::IsFirstUpdate() {
    return;
}
float _Script_RsGameTechRT::RsCameraBehavior::GetRotationSpeedPitch(_Script_RsGameTechRT::RsCameraInputs& Inputs) {
    return;
}
void _Script_RsGameTechRT::RsCameraBehavior::BlueprintEnd(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& PreviousOutputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs) {
    return;
}
void _Script_RsGameTechRT::RsCameraBehavior::BlueprintBegin(_Script_RsGameTechRT::RsCameraInputs& Inputs, _Script_RsGameTechRT::RsCameraOutputs& PreviousOutputs, _Script_RsGameTechRT::RsCameraOutputs& Outputs) {
    return;
}
