#include "..\FUObjectArray.hpp"
#include "UI_interact_icon_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::ExecuteUbergraph_UI_interact_icon(int32_t EntryPoint) {
    return;
}
void* _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::Overlay*& _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::get_Far() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x240);
}
_Script_UMG::WidgetAnimation*& _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::get_Pulse2() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::WidgetAnimation*& _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::get_Transition() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x218);
}
_Script_UMG::Image*& _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::get_DistancePrompt() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x238);
}
_Script_UMG::Image*& _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::get_CenterSmall() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x230);
}
_Script_UMG::WidgetAnimation*& _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::get_Pulse() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x220);
}
_Script_UMG::CanvasPanel*& _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::get_CanvasPanel_0() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x228);
}
_Script_UMG::Image*& _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x248);
}
_Script_UMG::Image*& _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::get_Image_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x250);
}
_Script_UMG::Image*& _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::get_Image_2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x258);
}
_Script_UMG::Image*& _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::get_Image_3() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::get_InteractPrompt() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Overlay*& _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::get_Near() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x270);
}
void* _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::get_InteractType() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::get_Ring() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
void* _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::get_TypeToIconMapping() {
    return (void*)((uintptr_t)this + 0x288);
}
void* _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::get_IconMappings() {
    return (void*)((uintptr_t)this + 0x2d8);
}
_Script_CoreUObject::Class* _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/InWorld/UI_interact_icon.UI_interact_icon_C");
    return result;
}
int32_t& _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::get_InteractState() {
    return *(int32_t*)((uintptr_t)this + 0x3c8);
}
void* _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::GetVisibility_0() {
    return;
}
void _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::UpdateIcon(int32_t NewState, void* NewInteractType) {
    return;
}
void _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::UpdateInteractIconSet(void* NewInteractType) {
    return;
}
void _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::Construct0() {
    return;
}
void _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C::TransitionEvent() {
    return;
}
