#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SimpleMemberReference.hpp"
_Script_CoreUObject::Object*& _Script_Engine::SimpleMemberReference::get_MemberParent() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::SimpleMemberReference::get_MemberName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::SimpleMemberReference::get_MemberGuid() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::SimpleMemberReference::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SimpleMemberReference");
    return result;
}
