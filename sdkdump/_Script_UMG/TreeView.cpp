#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ListView.hpp"
#include "TreeView.hpp"
void _Script_UMG::TreeView::CollapseAll() {
    return;
}
void _Script_UMG::TreeView::ExpandAll() {
    return;
}
_Script_CoreUObject::Class* _Script_UMG::TreeView::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.TreeView");
    return result;
}
void* _Script_UMG::TreeView::get_BP_OnGetItemChildren() {
    return (void*)((uintptr_t)this + 0x338);
}
void* _Script_UMG::TreeView::get_BP_OnItemExpansionChanged() {
    return (void*)((uintptr_t)this + 0x348);
}
void _Script_UMG::TreeView::SetItemExpansion(_Script_CoreUObject::Object* Item, bool bExpandItem) {
    return;
}
