#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_OffsetByFocusNormal.hpp"
void* _Script_SwGame::R4CameraBehavior_OffsetByFocusNormal::get_Offset() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_OffsetByFocusNormal::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_OffsetByFocusNormal");
    return result;
}
