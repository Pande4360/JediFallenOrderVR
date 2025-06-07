#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "RsAnimNotify_AbilityParry.hpp"
void* _Script_SwGame::RsAnimNotify_AbilityParry::get_AbilityType() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_SwGame::RsAnimNotify_AbilityParry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsAnimNotify_AbilityParry");
    return result;
}
