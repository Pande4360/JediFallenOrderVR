#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTService.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwBTService_BuddySelectAttachPoint.hpp"
bool _Script_SwGame::SwBTService_BuddySelectAttachPoint::get_bIgnoreBackpackWhenDiceRoll() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
float& _Script_SwGame::SwBTService_BuddySelectAttachPoint::get_AttachDecayAmount() {
    return *(float*)((uintptr_t)this + 0x70);
}
float& _Script_SwGame::SwBTService_BuddySelectAttachPoint::get_MinimalStayDuration() {
    return *(float*)((uintptr_t)this + 0x74);
}
void _Script_SwGame::SwBTService_BuddySelectAttachPoint::set_bIgnoreBackpackWhenDiceRoll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwBTService_BuddySelectAttachPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBTService_BuddySelectAttachPoint");
    return result;
}
