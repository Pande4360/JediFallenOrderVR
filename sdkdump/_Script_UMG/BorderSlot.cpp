#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "BorderSlot.hpp"
#include "PanelSlot.hpp"
void _Script_UMG::BorderSlot::SetHorizontalAlignment(void* InHorizontalAlignment) {
    return;
}
void* _Script_UMG::BorderSlot::get_Padding() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_UMG::BorderSlot::get_VerticalAlignment() {
    return (void*)((uintptr_t)this + 0x49);
}
void* _Script_UMG::BorderSlot::get_HorizontalAlignment() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_UMG::BorderSlot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.BorderSlot");
    return result;
}
void _Script_UMG::BorderSlot::SetVerticalAlignment(void* InVerticalAlignment) {
    return;
}
void _Script_UMG::BorderSlot::SetPadding(_Script_SlateCore::Margin InPadding) {
    return;
}
