#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwDefenseState.hpp"
#include "SwPlayerDefenseState.hpp"
void _Script_SwGame::SwPlayerDefenseState::set_bActivateNathanAnimGraph(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x180 + 0);
    *(uint8_t*)((uintptr_t)this + 0x180 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwPlayerDefenseState::get_bPlayOnEnterAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x130 + 0)) & 1 != 0;
}
void _Script_SwGame::SwPlayerDefenseState::set_bPlayOnEnterAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x130 + 0);
    *(uint8_t*)((uintptr_t)this + 0x130 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwPlayerDefenseState::get_ModifierDefinitionList() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_SwGame::SwPlayerDefenseState::get_BlockEnterData() {
    return (void*)((uintptr_t)this + 0x138);
}
bool _Script_SwGame::SwPlayerDefenseState::get_bActivateNathanAnimGraph() {
    return (*(uint8_t*)((uintptr_t)this + 0x180 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_SwGame::SwPlayerDefenseState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwPlayerDefenseState");
    return result;
}
