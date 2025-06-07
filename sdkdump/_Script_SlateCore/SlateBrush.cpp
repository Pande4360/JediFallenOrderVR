#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SlateBrush.hpp"
void* _Script_SlateCore::SlateBrush::get_ImageSize() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::SlateBrush::get_Margin() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SlateCore::SlateBrush::get_TintColor() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_SlateCore::SlateBrush::get_Tiling() {
    return (void*)((uintptr_t)this + 0x6d);
}
void* _Script_SlateCore::SlateBrush::get_UVRegion() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Object*& _Script_SlateCore::SlateBrush::get_ResourceObject() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x48);
}
void* _Script_SlateCore::SlateBrush::get_ResourceName() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_SlateCore::SlateBrush::get_DrawAs() {
    return (void*)((uintptr_t)this + 0x6c);
}
void* _Script_SlateCore::SlateBrush::get_Mirroring() {
    return (void*)((uintptr_t)this + 0x6e);
}
void* _Script_SlateCore::SlateBrush::get_ImageType() {
    return (void*)((uintptr_t)this + 0x6f);
}
bool _Script_SlateCore::SlateBrush::get_bIsDynamicallyLoaded() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_SlateCore::SlateBrush::set_bIsDynamicallyLoaded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SlateCore::SlateBrush::get_bHasUObject() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 2 != 0;
}
void _Script_SlateCore::SlateBrush::set_bHasUObject(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_SlateCore::SlateBrush::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.SlateBrush");
    return result;
}
