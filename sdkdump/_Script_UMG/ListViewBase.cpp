#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ListViewBase.hpp"
#include "Widget.hpp"
void* _Script_UMG::ListViewBase::get_EntryWidgetClass() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_UMG::ListViewBase::get_BP_OnEntryGenerated() {
    return (void*)((uintptr_t)this + 0x108);
}
void _Script_UMG::ListViewBase::ScrollToTop() {
    return;
}
_Script_CoreUObject::Class* _Script_UMG::ListViewBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.ListViewBase");
    return result;
}
void* _Script_UMG::ListViewBase::get_BP_OnEntryReleased() {
    return (void*)((uintptr_t)this + 0x118);
}
void _Script_UMG::ListViewBase::ScrollToBottom() {
    return;
}
void _Script_UMG::ListViewBase::RegenerateAllEntries() {
    return;
}
void* _Script_UMG::ListViewBase::GetDisplayedEntryWidgets() {
    return;
}
