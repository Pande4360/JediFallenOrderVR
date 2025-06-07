#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsConditionalAnimNotifyState.hpp"
#include "RsConditionalTargetAnimNotifyState.hpp"
void* _Script_Engine::RsConditionalTargetAnimNotifyState::get_RequiredTargetTagQuery() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_Engine::RsConditionalTargetAnimNotifyState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsConditionalTargetAnimNotifyState");
    return result;
}
