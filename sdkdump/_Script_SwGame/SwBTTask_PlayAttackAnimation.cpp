#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwAttackState.hpp"
#include "SwBTTask_PlayAttackAnimation.hpp"
#include "SwBTTask_PlayCombatStateAnimation.hpp"
_Script_SwGame::SwAttackState*& _Script_SwGame::SwBTTask_PlayAttackAnimation::get_AttackTemplate() {
    return *(_Script_SwGame::SwAttackState**)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwBTTask_PlayAttackAnimation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBTTask_PlayAttackAnimation");
    return result;
}
bool _Script_SwGame::SwBTTask_PlayAttackAnimation::get_bNeedsTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 1 != 0;
}
void _Script_SwGame::SwBTTask_PlayAttackAnimation::set_bNeedsTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwBTTask_PlayAttackAnimation::get_bRequiresLOS() {
    return (*(uint8_t*)((uintptr_t)this + 0xd1 + 0)) & 1 != 0;
}
void _Script_SwGame::SwBTTask_PlayAttackAnimation::set_bRequiresLOS(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
