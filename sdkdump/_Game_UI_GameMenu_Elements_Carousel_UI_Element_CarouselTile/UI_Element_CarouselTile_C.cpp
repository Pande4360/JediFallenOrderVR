#include "..\FUObjectArray.hpp"
#include "UI_Element_CarouselTile_C.hpp"
#include "..\_Game_UI_GameMenu_Elements_UI_Element_Base\UI_Element_Base_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::Image*& _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_Img_UNREADMarker() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2f8);
}
void* _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x2c0);
}
_Script_UMG::Border*& _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_Border_0() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_Highlight() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x2d0);
}
void _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::Preconstruct_Init0(bool& Result) {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_BookCoverBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2d8);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2e8);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_Image_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2f0);
}
_Script_UMG::Overlay*& _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_NumberofEntries() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x300);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_TextBlock_1() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x308);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_TotalEntries() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x310);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_UnlockedEntries() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x318);
}
_Script_UMG::Border*& _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_Widget_Border() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x320);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_Widget_CarouselText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x328);
}
void* _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_TileColor() {
    return (void*)((uintptr_t)this + 0x330);
}
void* _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_TileFocusedColor() {
    return (void*)((uintptr_t)this + 0x340);
}
void* _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_TileVisitedColor() {
    return (void*)((uintptr_t)this + 0x350);
}
void* _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_CurrentURL() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_LockedBookCover() {
    return (void*)((uintptr_t)this + 0x368);
}
bool _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_IsLocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x390 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::set_IsLocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x390 + 0);
    *(uint8_t*)((uintptr_t)this + 0x390 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_NewVar_0_0() {
    return (*(uint8_t*)((uintptr_t)this + 0x391 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::set_NewVar_0_0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x391 + 0);
    *(uint8_t*)((uintptr_t)this + 0x391 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_NumberColorOn() {
    return (void*)((uintptr_t)this + 0x394);
}
void* _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::get_NumberColorOff() {
    return (void*)((uintptr_t)this + 0x3a4);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/Elements/Carousel/UI_Element_CarouselTile.UI_Element_CarouselTile_C");
    return result;
}
void _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::SetNumEntriesText() {
    return;
}
void _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::UI_UpdateFocusState0(bool ElementFocused, bool SubmenuFocused, bool Active, bool& ElementFocus, bool& SubMenuFocus, bool& ElementActive) {
    return;
}
void _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::SetCarouselText(void* newText) {
    return;
}
void _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::OnLoaded_7A0A89114782BA83744BEF952F6E2C5E(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::Construct0() {
    return;
}
void _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::UpdateUnreadState0(bool Unread) {
    return;
}
void _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::OnFocused() {
    return;
}
void _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::LoadFeaturedImage(void* Texture) {
    return;
}
void _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::CallAcceptedEvent0() {
    return;
}
void _Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C::ExecuteUbergraph_UI_Element_CarouselTile(int32_t EntryPoint) {
    return;
}
