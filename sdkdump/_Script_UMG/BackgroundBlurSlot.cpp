#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "BackgroundBlurSlot.hpp"
#include "PanelSlot.hpp"
void* _Script_UMG::BackgroundBlurSlot::get_Padding() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_UMG::BackgroundBlurSlot::SetPadding(_Script_SlateCore::Margin InPadding) {
    return;
}
void* _Script_UMG::BackgroundBlurSlot::get_HorizontalAlignment() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_UMG::BackgroundBlurSlot::get_VerticalAlignment() {
    return (void*)((uintptr_t)this + 0x49);
}
_Script_CoreUObject::Class* _Script_UMG::BackgroundBlurSlot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.BackgroundBlurSlot");
    return result;
}
void _Script_UMG::BackgroundBlurSlot::SetVerticalAlignment(void* InVerticalAlignment) {
    return;
}
void _Script_UMG::BackgroundBlurSlot::SetHorizontalAlignment(void* InHorizontalAlignment) {
    return;
}
