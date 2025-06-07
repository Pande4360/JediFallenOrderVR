#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "DynamicEntryBox.hpp"
#include "UserWidget.hpp"
#include "Widget.hpp"
void* _Script_UMG::DynamicEntryBox::get_EntrySizeRule() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_UMG::DynamicEntryBox::get_EntryBoxType() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_UMG::DynamicEntryBox::get_EntryWidgetClass() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_UMG::DynamicEntryBox::get_EntrySpacing() {
    return (void*)((uintptr_t)this + 0x104);
}
void* _Script_UMG::DynamicEntryBox::get_SpacingPattern() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_UMG::DynamicEntryBox::get_EntryHorizontalAlignment() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_UMG::DynamicEntryBox::get_EntryVerticalAlignment() {
    return (void*)((uintptr_t)this + 0x129);
}
int32_t& _Script_UMG::DynamicEntryBox::get_MaxElementSize() {
    return *(int32_t*)((uintptr_t)this + 0x12c);
}
_Script_UMG::UserWidget* _Script_UMG::DynamicEntryBox::BP_CreateEntryOfClass(void* EntryClass) {
    return;
}
_Script_CoreUObject::Class* _Script_UMG::DynamicEntryBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.DynamicEntryBox");
    return result;
}
void _Script_UMG::DynamicEntryBox::SetEntrySpacing(_Script_CoreUObject::Vector2D& InEntrySpacing) {
    return;
}
void _Script_UMG::DynamicEntryBox::Reset(bool bDeleteWidgets) {
    return;
}
void _Script_UMG::DynamicEntryBox::RemoveEntry(_Script_UMG::UserWidget* EntryWidget) {
    return;
}
int32_t _Script_UMG::DynamicEntryBox::GetNumEntries() {
    return;
}
void* _Script_UMG::DynamicEntryBox::GetAllEntries() {
    return;
}
_Script_UMG::UserWidget* _Script_UMG::DynamicEntryBox::BP_CreateEntry() {
    return;
}
