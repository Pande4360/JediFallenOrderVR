#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAIResource.hpp"
#include "SwAIResource_Fight.hpp"
float& _Script_SwGame::SwAIResource_Fight::get_StealRampDownThreshold() {
    return *(float*)((uintptr_t)this + 0x124);
}
float& _Script_SwGame::SwAIResource_Fight::get_GlobalLockoutTimeAfterBlockByAttacker() {
    return *(float*)((uintptr_t)this + 0x108);
}
float& _Script_SwGame::SwAIResource_Fight::get_StealRampDownTime() {
    return *(float*)((uintptr_t)this + 0x120);
}
float& _Script_SwGame::SwAIResource_Fight::get_GlobalLockoutTimeAfterVictimSync() {
    return *(float*)((uintptr_t)this + 0x10c);
}
float& _Script_SwGame::SwAIResource_Fight::get_MaxTimeSinceLastAttacked() {
    return *(float*)((uintptr_t)this + 0x110);
}
float& _Script_SwGame::SwAIResource_Fight::get_DelayAfterBeingSlowedToReleaseResource() {
    return *(float*)((uintptr_t)this + 0x114);
}
float& _Script_SwGame::SwAIResource_Fight::get_StealRampUpTime() {
    return *(float*)((uintptr_t)this + 0x11c);
}
float& _Script_SwGame::SwAIResource_Fight::get_MaxQueueTime() {
    return *(float*)((uintptr_t)this + 0x118);
}
float& _Script_SwGame::SwAIResource_Fight::get_StealLockoutTimeAfterRelease() {
    return *(float*)((uintptr_t)this + 0x128);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAIResource_Fight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAIResource_Fight");
    return result;
}
