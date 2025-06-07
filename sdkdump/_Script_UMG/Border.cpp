#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\SlateBrushAsset.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
#include "Border.hpp"
#include "ContentWidget.hpp"
void _Script_UMG::Border::SetBrushColor(_Script_CoreUObject::LinearColor InBrushColor) {
    return;
}
void* _Script_UMG::Border::get_HorizontalAlignment() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_UMG::Border::get_VerticalAlignment() {
    return (void*)((uintptr_t)this + 0x119);
}
void* _Script_UMG::Border::get_ContentColorAndOpacityDelegate() {
    return (void*)((uintptr_t)this + 0x130);
}
bool _Script_UMG::Border::get_bShowEffectWhenDisabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x11a + 0)) & 1 != 0;
}
void _Script_UMG::Border::set_bShowEffectWhenDisabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11a + 0);
    *(uint8_t*)((uintptr_t)this + 0x11a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::Border::get_ContentColorAndOpacity() {
    return (void*)((uintptr_t)this + 0x11c);
}
void* _Script_UMG::Border::get_Background() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_UMG::Border::get_Padding() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_UMG::Border::get_BackgroundDelegate() {
    return (void*)((uintptr_t)this + 0x1d8);
}
void* _Script_UMG::Border::get_BrushColor() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_UMG::Border::get_BrushColorDelegate() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void* _Script_UMG::Border::get_DesiredSizeScale() {
    return (void*)((uintptr_t)this + 0x208);
}
void* _Script_UMG::Border::get_OnMouseButtonDownEvent() {
    return (void*)((uintptr_t)this + 0x210);
}
void* _Script_UMG::Border::get_OnMouseButtonUpEvent() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Script_UMG::Border::get_OnMouseMoveEvent() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Script_UMG::Border::get_OnMouseDoubleClickEvent() {
    return (void*)((uintptr_t)this + 0x240);
}
_Script_CoreUObject::Class* _Script_UMG::Border::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.Border");
    return result;
}
void _Script_UMG::Border::SetVerticalAlignment(void* InVerticalAlignment) {
    return;
}
void _Script_UMG::Border::SetPadding(_Script_SlateCore::Margin InPadding) {
    return;
}
void _Script_UMG::Border::SetHorizontalAlignment(void* InHorizontalAlignment) {
    return;
}
void _Script_UMG::Border::SetDesiredSizeScale(_Script_CoreUObject::Vector2D InScale) {
    return;
}
void _Script_UMG::Border::SetContentColorAndOpacity(_Script_CoreUObject::LinearColor InContentColorAndOpacity) {
    return;
}
void _Script_UMG::Border::SetBrushFromTexture(_Script_Engine::Texture2D* Texture) {
    return;
}
void _Script_UMG::Border::SetBrushFromMaterial(_Script_Engine::MaterialInterface* Material) {
    return;
}
void _Script_UMG::Border::SetBrushFromAsset(_Script_Engine::SlateBrushAsset* Asset) {
    return;
}
void _Script_UMG::Border::SetBrush(_Script_SlateCore::SlateBrush& InBrush) {
    return;
}
_Script_Engine::MaterialInstanceDynamic* _Script_UMG::Border::GetDynamicMaterial() {
    return;
}
