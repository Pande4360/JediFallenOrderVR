#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CompositeFallbackFont.hpp"
_Script_CoreUObject::Class* _Script_SlateCore::CompositeFallbackFont::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.CompositeFallbackFont");
    return result;
}
void* _Script_SlateCore::CompositeFallbackFont::get_Typeface() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_SlateCore::CompositeFallbackFont::get_ScalingFactor() {
    return *(float*)((uintptr_t)this + 0x10);
}
