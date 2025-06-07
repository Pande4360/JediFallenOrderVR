#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsSyncDefinition.hpp"
#include "SwBTTask_PlayCombatStateAnimation.hpp"
_Script_RsGameTechRT::RsSyncDefinition*& _Script_SwGame::SwBTTask_PlayCombatStateAnimation::get_SyncDef() {
    return *(_Script_RsGameTechRT::RsSyncDefinition**)((uintptr_t)this + 0xb8);
}
void* _Script_SwGame::SwBTTask_PlayCombatStateAnimation::get_AnimData() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_SwGame::SwBTTask_PlayCombatStateAnimation::get_BlendspaceInputSource() {
    return (void*)((uintptr_t)this + 0xc0);
}
bool _Script_SwGame::SwBTTask_PlayCombatStateAnimation::get_bMaintainCharacterMotion() {
    return (*(uint8_t*)((uintptr_t)this + 0xc1 + 0)) & 1 != 0;
}
void _Script_SwGame::SwBTTask_PlayCombatStateAnimation::set_bMaintainCharacterMotion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwBTTask_PlayCombatStateAnimation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBTTask_PlayCombatStateAnimation");
    return result;
}
