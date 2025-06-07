#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_OrientRelativeToFocusNormal.hpp"
float& _Script_SwGame::R4CameraBehavior_OrientRelativeToFocusNormal::get_RelativeTargetAngleBehindPlayer() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::R4CameraBehavior_OrientRelativeToFocusNormal::get_RelativeTargetAngleInFrontOfPlayer() {
    return *(float*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_OrientRelativeToFocusNormal::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_OrientRelativeToFocusNormal");
    return result;
}
