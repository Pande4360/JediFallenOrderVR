#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SlateFontInfo.hpp"
_Script_CoreUObject::Object*& _Script_SlateCore::SlateFontInfo::get_FontObject() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Object*& _Script_SlateCore::SlateFontInfo::get_FontMaterial() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::SlateFontInfo::get_OutlineSettings() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SlateCore::SlateFontInfo::get_TypefaceFontName() {
    return (void*)((uintptr_t)this + 0x48);
}
int32_t& _Script_SlateCore::SlateFontInfo::get_Size() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_SlateCore::SlateFontInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.SlateFontInfo");
    return result;
}
