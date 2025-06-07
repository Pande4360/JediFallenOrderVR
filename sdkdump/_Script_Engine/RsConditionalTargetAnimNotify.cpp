#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsConditionalAnimNotify.hpp"
#include "RsConditionalTargetAnimNotify.hpp"
void* _Script_Engine::RsConditionalTargetAnimNotify::get_RequiredTargetTagQuery() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_Engine::RsConditionalTargetAnimNotify::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsConditionalTargetAnimNotify");
    return result;
}
