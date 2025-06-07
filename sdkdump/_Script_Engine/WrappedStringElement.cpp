#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "WrappedStringElement.hpp"
_Script_CoreUObject::Class* _Script_Engine::WrappedStringElement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.WrappedStringElement");
    return result;
}
void* _Script_Engine::WrappedStringElement::get_Value() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::WrappedStringElement::get_LineExtent() {
    return (void*)((uintptr_t)this + 0x10);
}
