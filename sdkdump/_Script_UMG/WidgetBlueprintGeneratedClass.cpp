#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintGeneratedClass.hpp"
#include "UserWidget.hpp"
#include "WidgetBlueprintGeneratedClass.hpp"
#include "WidgetTree.hpp"
_Script_UMG::WidgetTree*& _Script_UMG::WidgetBlueprintGeneratedClass::get_WidgetTree() {
    return *(_Script_UMG::WidgetTree**)((uintptr_t)this + 0x2e8);
}
bool _Script_UMG::WidgetBlueprintGeneratedClass::get_bTemplateInitialized() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f0 + 0)) & 8 != 0;
}
bool _Script_UMG::WidgetBlueprintGeneratedClass::get_bAllowTemplate() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f0 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetBlueprintGeneratedClass::set_bAllowTemplate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::WidgetBlueprintGeneratedClass::get_bAllowDynamicCreation() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f0 + 0)) & 2 != 0;
}
void _Script_UMG::WidgetBlueprintGeneratedClass::set_bAllowDynamicCreation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_UMG::WidgetBlueprintGeneratedClass::get_bValidTemplate() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f0 + 0)) & 4 != 0;
}
void _Script_UMG::WidgetBlueprintGeneratedClass::set_bValidTemplate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_UMG::WidgetBlueprintGeneratedClass::set_bTemplateInitialized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_UMG::WidgetBlueprintGeneratedClass::get_bCookedTemplate() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f0 + 0)) & 16 != 0;
}
void _Script_UMG::WidgetBlueprintGeneratedClass::set_bCookedTemplate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_UMG::WidgetBlueprintGeneratedClass::get_bClassRequiresNativeTick() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f0 + 0)) & 32 != 0;
}
void _Script_UMG::WidgetBlueprintGeneratedClass::set_bClassRequiresNativeTick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void* _Script_UMG::WidgetBlueprintGeneratedClass::get_Bindings() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Script_UMG::WidgetBlueprintGeneratedClass::get_Animations() {
    return (void*)((uintptr_t)this + 0x308);
}
void* _Script_UMG::WidgetBlueprintGeneratedClass::get_NamedSlots() {
    return (void*)((uintptr_t)this + 0x318);
}
void* _Script_UMG::WidgetBlueprintGeneratedClass::get_TemplateAsset() {
    return (void*)((uintptr_t)this + 0x328);
}
_Script_UMG::UserWidget*& _Script_UMG::WidgetBlueprintGeneratedClass::get_Template() {
    return *(_Script_UMG::UserWidget**)((uintptr_t)this + 0x350);
}
_Script_CoreUObject::Class* _Script_UMG::WidgetBlueprintGeneratedClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WidgetBlueprintGeneratedClass");
    return result;
}
