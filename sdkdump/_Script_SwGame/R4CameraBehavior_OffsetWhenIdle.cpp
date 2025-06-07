#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "R4CameraBehavior_Offset.hpp"
#include "R4CameraBehavior_OffsetWhenIdle.hpp"
float& _Script_SwGame::R4CameraBehavior_OffsetWhenIdle::get_DelayBeforeApplyingOffsets() {
    return *(float*)((uintptr_t)this + 0x88);
}
float& _Script_SwGame::R4CameraBehavior_OffsetWhenIdle::get_TrackingTimeOut() {
    return *(float*)((uintptr_t)this + 0xa0);
}
float& _Script_SwGame::R4CameraBehavior_OffsetWhenIdle::get_EaseInTime() {
    return *(float*)((uintptr_t)this + 0x8c);
}
float& _Script_SwGame::R4CameraBehavior_OffsetWhenIdle::get_TrackingPercentageIn() {
    return *(float*)((uintptr_t)this + 0x90);
}
float& _Script_SwGame::R4CameraBehavior_OffsetWhenIdle::get_TrackingTimeIn() {
    return *(float*)((uintptr_t)this + 0x94);
}
float& _Script_SwGame::R4CameraBehavior_OffsetWhenIdle::get_EaseOutTime() {
    return *(float*)((uintptr_t)this + 0x98);
}
float& _Script_SwGame::R4CameraBehavior_OffsetWhenIdle::get_TrackingPercentageOut() {
    return *(float*)((uintptr_t)this + 0x9c);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_OffsetWhenIdle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_OffsetWhenIdle");
    return result;
}
