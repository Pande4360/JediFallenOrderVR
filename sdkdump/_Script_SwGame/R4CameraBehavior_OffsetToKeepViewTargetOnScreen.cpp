#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_OffsetToKeepViewTargetOnScreen.hpp"
float& _Script_SwGame::R4CameraBehavior_OffsetToKeepViewTargetOnScreen::get_MinDistFromLeft() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::R4CameraBehavior_OffsetToKeepViewTargetOnScreen::get_MinDistFromRight() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_SwGame::R4CameraBehavior_OffsetToKeepViewTargetOnScreen::get_MinDistFromTop() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_SwGame::R4CameraBehavior_OffsetToKeepViewTargetOnScreen::get_MinDistFromBottom() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_OffsetToKeepViewTargetOnScreen::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_OffsetToKeepViewTargetOnScreen");
    return result;
}
