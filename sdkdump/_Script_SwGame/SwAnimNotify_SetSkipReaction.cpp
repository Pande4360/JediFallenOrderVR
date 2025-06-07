#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "SwAnimNotify_SetSkipReaction.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwAnimNotify_SetSkipReaction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAnimNotify_SetSkipReaction");
    return result;
}
void* _Script_SwGame::SwAnimNotify_SetSkipReaction::get_SkipReactionConfig() {
    return (void*)((uintptr_t)this + 0x30);
}
