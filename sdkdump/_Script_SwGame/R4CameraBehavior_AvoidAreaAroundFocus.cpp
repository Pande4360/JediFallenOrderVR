#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_AvoidAreaAroundFocus.hpp"
float& _Script_SwGame::R4CameraBehavior_AvoidAreaAroundFocus::get_CameraAvoidDistance() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::R4CameraBehavior_AvoidAreaAroundFocus::get_AvoidanceCylinderBodyHeight() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_SwGame::R4CameraBehavior_AvoidAreaAroundFocus::get_MinimumCameraDistance() {
    return *(float*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_AvoidAreaAroundFocus::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_AvoidAreaAroundFocus");
    return result;
}
float& _Script_SwGame::R4CameraBehavior_AvoidAreaAroundFocus::get_MaximumCameraDistance() {
    return *(float*)((uintptr_t)this + 0x3c);
}
