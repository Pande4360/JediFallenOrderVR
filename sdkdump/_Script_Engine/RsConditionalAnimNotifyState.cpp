#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNotifyState.hpp"
#include "RsConditionalAnimNotifyState.hpp"
void* _Script_Engine::RsConditionalAnimNotifyState::get_RequiredTagQuery() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::RsConditionalAnimNotifyState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsConditionalAnimNotifyState");
    return result;
}
