#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwBTTask_BuddyAttachToHeroAndWait.hpp"
void _Script_SwGame::SwBTTask_BuddyAttachToHeroAndWait::set_bInfiniteWaitTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74 + 0);
    *(uint8_t*)((uintptr_t)this + 0x74 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwBTTask_BuddyAttachToHeroAndWait::get_WaitTime() {
    return *(float*)((uintptr_t)this + 0x70);
}
bool _Script_SwGame::SwBTTask_BuddyAttachToHeroAndWait::get_bInfiniteWaitTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x74 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_SwGame::SwBTTask_BuddyAttachToHeroAndWait::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBTTask_BuddyAttachToHeroAndWait");
    return result;
}
