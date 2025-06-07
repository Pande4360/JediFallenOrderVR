#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CompositeFont.hpp"
void* _Script_SlateCore::CompositeFont::get_DefaultTypeface() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SlateCore::CompositeFont::get_FallbackTypeface() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SlateCore::CompositeFont::get_SubTypefaces() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_SlateCore::CompositeFont::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.CompositeFont");
    return result;
}
