#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PreviewAttachedObjectPair.hpp"
void* _Script_Engine::PreviewAttachedObjectPair::get_AttachedObject() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Object*& _Script_Engine::PreviewAttachedObjectPair::get_Object() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x28);
}
void* _Script_Engine::PreviewAttachedObjectPair::get_AttachedTo() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::PreviewAttachedObjectPair::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PreviewAttachedObjectPair");
    return result;
}
