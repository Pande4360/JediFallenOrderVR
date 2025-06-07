#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_AnchorToFocusLocation.hpp"
float& _Script_SwGame::R4CameraBehavior_AnchorToFocusLocation::get_FocusPercentage() {
    return *(float*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_AnchorToFocusLocation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_AnchorToFocusLocation");
    return result;
}
