#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwAIAggroTimeOuts.hpp"
int32_t& _Script_SwGame::SwAIAggroTimeOuts::get_MaxCharacterType() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
float& _Script_SwGame::SwAIAggroTimeOuts::get_MinCharacterTypeLockoutTime() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_SwGame::SwAIAggroTimeOuts::get_MaxCharacterTypeLockoutTime() {
    return *(float*)((uintptr_t)this + 0x8);
}
bool _Script_SwGame::SwAIAggroTimeOuts::get_bUseSingleAttackerLockoutTimes() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
float& _Script_SwGame::SwAIAggroTimeOuts::get_MinIndividualLockoutTime() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_SwGame::SwAIAggroTimeOuts::get_MaxIndividualLockoutTime() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_SwGame::SwAIAggroTimeOuts::get_MinSingleAttackerLockoutTime() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_SwGame::SwAIAggroTimeOuts::get_MaxSingleAttackerLockoutTime() {
    return *(float*)((uintptr_t)this + 0x18);
}
void _Script_SwGame::SwAIAggroTimeOuts::set_bUseSingleAttackerLockoutTimes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAIAggroTimeOuts::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwAIAggroTimeOuts");
    return result;
}
