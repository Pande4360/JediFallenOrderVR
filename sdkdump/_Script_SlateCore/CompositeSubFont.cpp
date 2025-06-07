#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CompositeFallbackFont.hpp"
#include "CompositeSubFont.hpp"
void* _Script_SlateCore::CompositeSubFont::get_CharacterRanges() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_SlateCore::CompositeSubFont::get_Cultures() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_SlateCore::CompositeSubFont::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.CompositeSubFont");
    return result;
}
