#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsReactionState.hpp"
#include "SwReactionState.hpp"
bool _Script_SwGame::SwReactionState::get_bHasTickImplemetation() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 1 != 0;
}
void _Script_SwGame::SwReactionState::set_bHasTickImplemetation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwReactionState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwReactionState");
    return result;
}
void _Script_SwGame::SwReactionState::TickReaction(_Script_RsGameTechRT::RsCharacter* TheOneReacting, float DeltaTime) {
    return;
}
void _Script_SwGame::SwReactionState::OnEndReaction(_Script_RsGameTechRT::RsCharacter* TheOneReacting) {
    return;
}
void _Script_SwGame::SwReactionState::OnBeginReaction(_Script_RsGameTechRT::RsCharacter* TheOneReacting) {
    return;
}
