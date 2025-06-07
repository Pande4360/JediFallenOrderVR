#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CollectionReference.hpp"
_Script_CoreUObject::Class* _Script_Engine::CollectionReference::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CollectionReference");
    return result;
}
void* _Script_Engine::CollectionReference::get_CollectionName() {
    return (void*)((uintptr_t)this + 0x0);
}
