#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "HorizontalBoxSlot.hpp"
#include "PanelSlot.hpp"
#include "SlateChildSize.hpp"
void* _Script_UMG::HorizontalBoxSlot::get_Padding() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_UMG::HorizontalBoxSlot::get_HorizontalAlignment() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_UMG::HorizontalBoxSlot::get_Size() {
    return (void*)((uintptr_t)this + 0x48);
}
void _Script_UMG::HorizontalBoxSlot::SetVerticalAlignment(void* InVerticalAlignment) {
    return;
}
void* _Script_UMG::HorizontalBoxSlot::get_VerticalAlignment() {
    return (void*)((uintptr_t)this + 0x51);
}
_Script_CoreUObject::Class* _Script_UMG::HorizontalBoxSlot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.HorizontalBoxSlot");
    return result;
}
void _Script_UMG::HorizontalBoxSlot::SetPadding(_Script_SlateCore::Margin InPadding) {
    return;
}
void _Script_UMG::HorizontalBoxSlot::SetSize(_Script_UMG::SlateChildSize InSize) {
    return;
}
void _Script_UMG::HorizontalBoxSlot::SetHorizontalAlignment(void* InHorizontalAlignment) {
    return;
}
