#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNotify.hpp"
#include "RsConditionalAnimNotify.hpp"
void* _Script_Engine::RsConditionalAnimNotify::get_RequiredTagQuery() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::RsConditionalAnimNotify::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsConditionalAnimNotify");
    return result;
}
