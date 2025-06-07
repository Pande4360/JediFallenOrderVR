#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EdGraphPinReference.hpp"
void* _Script_Engine::EdGraphPinReference::get_OwningNode() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::EdGraphPinReference::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.EdGraphPinReference");
    return result;
}
void* _Script_Engine::EdGraphPinReference::get_PinId() {
    return (void*)((uintptr_t)this + 0x8);
}
