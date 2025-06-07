#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_LookDownSlope.hpp"
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_LookDownSlope::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_LookDownSlope");
    return result;
}
float& _Script_SwGame::R4CameraBehavior_LookDownSlope::get_LookAheadDist() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::R4CameraBehavior_LookDownSlope::get_TraceRadius() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_SwGame::R4CameraBehavior_LookDownSlope::get_PitchOffset() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_SwGame::R4CameraBehavior_LookDownSlope::get_MovementDirWeight() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_SwGame::R4CameraBehavior_LookDownSlope::get_PrevSlopeWeight() {
    return *(float*)((uintptr_t)this + 0x40);
}
