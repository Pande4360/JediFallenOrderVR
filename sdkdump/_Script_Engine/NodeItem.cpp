#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NodeItem.hpp"
void* _Script_Engine::NodeItem::get_Transform() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::NodeItem::get_ParentName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::NodeItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NodeItem");
    return result;
}
