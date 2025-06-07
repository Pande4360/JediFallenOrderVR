#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "WidgetNavigationData.hpp"
void* _Script_UMG::WidgetNavigationData::get_WidgetToFocus() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_UMG::WidgetNavigationData::get_Rule() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_UMG::WidgetNavigationData::get_Widget() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_UMG::WidgetNavigationData::get_CustomDelegate() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_UMG::WidgetNavigationData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.WidgetNavigationData");
    return result;
}
