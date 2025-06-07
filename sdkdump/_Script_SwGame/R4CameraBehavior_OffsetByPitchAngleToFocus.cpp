#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_OffsetByPitchAngleToFocus.hpp"
void* _Script_SwGame::R4CameraBehavior_OffsetByPitchAngleToFocus::get_CameraDepthCurve() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_OffsetByPitchAngleToFocus::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_OffsetByPitchAngleToFocus");
    return result;
}
