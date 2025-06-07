#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TypefaceEntry.hpp"
void* _Script_SlateCore::TypefaceEntry::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SlateCore::TypefaceEntry::get_Font() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SlateCore::TypefaceEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.TypefaceEntry");
    return result;
}
