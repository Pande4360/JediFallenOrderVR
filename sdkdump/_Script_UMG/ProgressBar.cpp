#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\SlateBrushAsset.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleAsset.hpp"
#include "ProgressBar.hpp"
#include "Widget.hpp"
void _Script_UMG::ProgressBar::SetPercent(float InPercent) {
    return;
}
float& _Script_UMG::ProgressBar::get_Percent() {
    return *(float*)((uintptr_t)this + 0x2c0);
}
void* _Script_UMG::ProgressBar::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x100);
}
_Script_SlateCore::SlateWidgetStyleAsset*& _Script_UMG::ProgressBar::get_Style() {
    return *(_Script_SlateCore::SlateWidgetStyleAsset**)((uintptr_t)this + 0x2a0);
}
_Script_Engine::SlateBrushAsset*& _Script_UMG::ProgressBar::get_BackgroundImage() {
    return *(_Script_Engine::SlateBrushAsset**)((uintptr_t)this + 0x2a8);
}
_Script_Engine::SlateBrushAsset*& _Script_UMG::ProgressBar::get_FillImage() {
    return *(_Script_Engine::SlateBrushAsset**)((uintptr_t)this + 0x2b0);
}
_Script_Engine::SlateBrushAsset*& _Script_UMG::ProgressBar::get_MarqueeImage() {
    return *(_Script_Engine::SlateBrushAsset**)((uintptr_t)this + 0x2b8);
}
void* _Script_UMG::ProgressBar::get_BarFillType() {
    return (void*)((uintptr_t)this + 0x2c4);
}
bool _Script_UMG::ProgressBar::get_bIsMarquee() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c5 + 0)) & 1 != 0;
}
void _Script_UMG::ProgressBar::set_bIsMarquee(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::ProgressBar::get_BorderPadding() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Script_UMG::ProgressBar::get_PercentDelegate() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void* _Script_UMG::ProgressBar::get_FillColorAndOpacity() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Script_UMG::ProgressBar::get_FillColorAndOpacityDelegate() {
    return (void*)((uintptr_t)this + 0x2f0);
}
_Script_CoreUObject::Class* _Script_UMG::ProgressBar::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.ProgressBar");
    return result;
}
void _Script_UMG::ProgressBar::SetIsMarquee(bool InbIsMarquee) {
    return;
}
void _Script_UMG::ProgressBar::SetFillColorAndOpacity(_Script_CoreUObject::LinearColor InColor) {
    return;
}
