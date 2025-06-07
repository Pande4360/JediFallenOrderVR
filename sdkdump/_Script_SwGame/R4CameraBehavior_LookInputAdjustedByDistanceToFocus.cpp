#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "R4CameraBehavior_LookInput.hpp"
#include "R4CameraBehavior_LookInputAdjustedByDistanceToFocus.hpp"
void* _Script_SwGame::R4CameraBehavior_LookInputAdjustedByDistanceToFocus::get_DistanceRotationSpeedCurveYaw() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_SwGame::R4CameraBehavior_LookInputAdjustedByDistanceToFocus::get_DistanceRotationSpeedCurvePitch() {
    return (void*)((uintptr_t)this + 0xc0);
}
float& _Script_SwGame::R4CameraBehavior_LookInputAdjustedByDistanceToFocus::get_DistanceScale() {
    return *(float*)((uintptr_t)this + 0x138);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_LookInputAdjustedByDistanceToFocus::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_LookInputAdjustedByDistanceToFocus");
    return result;
}
