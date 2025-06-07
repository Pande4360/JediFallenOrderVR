#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ButtonMashDurationAnimNotify.hpp"
#include "ButtonMashType.hpp"
void* _Script_SwGame::ButtonMashDurationAnimNotify::get_NotifyIdentifier() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_SwGame::ButtonMashDurationAnimNotify::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.ButtonMashDurationAnimNotify");
    return result;
}
