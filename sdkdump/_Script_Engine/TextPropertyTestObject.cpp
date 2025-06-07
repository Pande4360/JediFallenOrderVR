#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "TextPropertyTestObject.hpp"
_Script_CoreUObject::Class* _Script_Engine::TextPropertyTestObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TextPropertyTestObject");
    return result;
}
void* _Script_Engine::TextPropertyTestObject::get_DefaultedText() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::TextPropertyTestObject::get_UndefaultedText() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::TextPropertyTestObject::get_TransientText() {
    return (void*)((uintptr_t)this + 0x58);
}
