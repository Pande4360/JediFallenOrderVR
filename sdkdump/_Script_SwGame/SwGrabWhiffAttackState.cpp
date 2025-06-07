#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsGameTechRT\RsSyncDefinition.hpp"
#include "SwAttackState.hpp"
#include "SwGrabWhiffAttackState.hpp"
void _Script_SwGame::SwGrabWhiffAttackState::OnGrabStart(_Script_Engine::Actor* Victim) {
    return;
}
void* _Script_SwGame::SwGrabWhiffAttackState::get_SyncBlendSpaceInputType() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_RsGameTechRT::RsSyncDefinition*& _Script_SwGame::SwGrabWhiffAttackState::get_SyncDefinition() {
    return *(_Script_RsGameTechRT::RsSyncDefinition**)((uintptr_t)this + 0x258);
}
bool _Script_SwGame::SwGrabWhiffAttackState::get_bGrabSyncActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x261 + 0)) & 1 != 0;
}
void _Script_SwGame::SwGrabWhiffAttackState::set_bGrabSyncActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x261 + 0);
    *(uint8_t*)((uintptr_t)this + 0x261 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwGrabWhiffAttackState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwGrabWhiffAttackState");
    return result;
}
