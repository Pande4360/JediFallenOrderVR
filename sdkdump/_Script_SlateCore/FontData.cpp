#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "FontData.hpp"
int32_t& _Script_SlateCore::FontData::get_SubFaceIndex() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
void* _Script_SlateCore::FontData::get_FontFilename() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SlateCore::FontData::get_Hinting() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SlateCore::FontData::get_LoadingPolicy() {
    return (void*)((uintptr_t)this + 0x11);
}
_Script_CoreUObject::Object*& _Script_SlateCore::FontData::get_FontFaceAsset() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_SlateCore::FontData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.FontData");
    return result;
}
