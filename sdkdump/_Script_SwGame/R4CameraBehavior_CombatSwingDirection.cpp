#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_CombatSwingDirection.hpp"
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_CombatSwingDirection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_CombatSwingDirection");
    return result;
}
float& _Script_SwGame::R4CameraBehavior_CombatSwingDirection::get_OffsetMagnitude() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::R4CameraBehavior_CombatSwingDirection::get_Duration() {
    return *(float*)((uintptr_t)this + 0x34);
}
