#include "..\FUObjectArray.hpp"
#include "UI_TutorialCustom_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::HorizontalBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_HorizontalBox_9() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x2f8);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_38() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x380);
}
_Script_UMG::Border*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Border_1() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x290);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Confirm2() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_89() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x388);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Confirm1() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x218);
}
_Script_UMG::TextBlock*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_TextBlock_1() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x3f8);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_BlockParry_Anim() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x220);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x228);
}
void* _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::Get_ContainerCanvas_Visibility_0() {
    return;
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_10() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x370);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_FadeOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x230);
}
_Script_CoreUObject::Class* _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Tutorials/UI_TutorialCustom.UI_TutorialCustom_C");
    return result;
}
_Script_UMG::Border*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Border_2() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x298);
}
_Script_UMG::TextBlock*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Action1Txt() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x238);
}
_Script_UMG::TextBlock*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Action2Text() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x240);
}
_Script_UMG::VerticalBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Action_Evade() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x248);
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::ShowTargetSwitchLock() {
    return;
}
_Script_UMG::VerticalBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Action_Roll() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x250);
}
_Script_UMG::SizeBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_BlockParry() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x280);
}
_Script_UMG::HorizontalBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_HorizontalBox_14() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x318);
}
_Script_UMG::VerticalBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_ActionBlock() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x258);
}
_Script_UMG::HorizontalBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_HorizontalBox_11() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x308);
}
_Script_UMG::VerticalBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_ActionParry() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x260);
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::HeroZTargeted_Event(_Script_Engine::Actor* NewTarget) {
    return;
}
_Script_UMG::VerticalBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_ActionTargetSwitch() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x268);
}
_Script_UMG::VerticalBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_ActionTargetToggle() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x270);
}
void* _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_LVL_Tutorial_EvadeRoll_Complete() {
    return (void*)((uintptr_t)this + 0x4c0);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_BlockButton() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_7() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x358);
}
_Script_UMG::Border*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Border_0() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_11() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x378);
}
_Script_UMG::Border*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Border_3() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Dot() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::Border*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Border_4() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x2a8);
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::ShowTelekinesis() {
    return;
}
_Script_UMG::Border*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Border_5() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::HorizontalBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_ButtonBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::CanvasPanel*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_ContainerCanvas() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x2c0);
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::LVL_Tutorial_EvadeRoll_Complete__DelegateSignature() {
    return;
}
_Script_UMG::SizeBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_EvadeRoll() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x320);
}
_Script_UMG::HorizontalBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_HorizontalBox_1() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x2d8);
}
_Script_UMG::HorizontalBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_HorizontalBox_3() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::HorizontalBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_HorizontalBox_4() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x2e8);
}
_Script_UMG::HorizontalBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_HorizontalBox_6() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x2f0);
}
_Script_UMG::HorizontalBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_HorizontalBox_10() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x300);
}
_Script_UMG::HorizontalBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_HorizontalBox_13() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x310);
}
void* _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_LVL_Tutorial_ZTarget_Complete() {
    return (void*)((uintptr_t)this + 0x4b0);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x328);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x330);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_3() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x338);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_4() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x340);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_5() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x348);
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::HeroEvaded_Event_0() {
    return;
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_6() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x350);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_8() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x360);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_9() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x368);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_91() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x390);
}
_Script_UMG::TextBlock*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_TextBlock_0() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x3f0);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_92() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x398);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_94() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3a0);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_95() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3a8);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_102() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3b0);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_103() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3b8);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_104() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3c0);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Image_106() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3c8);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Outline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3d0);
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::set_Success2(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_ParryButton() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x3d8);
}
_Script_UMG::SizeBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_TargetSwitchLock() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x3e0);
}
_Script_UMG::SizeBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Telekinesis() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x3e8);
}
_Script_UMG::TextBlock*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_TextBlock_2() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x400);
}
_Script_UMG::TextBlock*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_TextBlock_3() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x408);
}
_Script_UMG::TextBlock*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_TextBlock_4() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x410);
}
_Script_UMG::TextBlock*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_TextBlock_5() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x418);
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::ShowBlockParry() {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_TextBlock_6() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x420);
}
_Script_UMG::TextBlock*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_TextBlock_7() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x428);
}
_Script_UMG::SizeBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_TKMode() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x430);
}
_Script_UMG::SizeBox*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_TwinBlade() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x438);
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::HeroEnterBlock_Event() {
    return;
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_UI_MenuButtonPrompt() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x440);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_UI_MenuButtonPrompt_C_0() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x448);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_UI_MenuButtonPrompt_C_1() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x450);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_UI_MenuButtonPrompt_C_2() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x458);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_UI_MenuButtonPrompt_C_3() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x460);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_UI_MenuButtonPrompt_C_4() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x468);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_UI_MenuButtonPrompt_C_5() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x470);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_UI_MenuButtonPrompt_C_6() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x478);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_UI_MenuButtonPrompt_C_7() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x480);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_UI_MenuButtonPrompt_C_8() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x488);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_UI_MenuButtonPrompt_C_9() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x490);
}
void* _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Dismissed() {
    return (void*)((uintptr_t)this + 0x498);
}
bool _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Success1() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a8 + 0)) & 1 != 0;
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::set_Success1(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Success2() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a9 + 0)) & 1 != 0;
}
bool _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_Success3() {
    return (*(uint8_t*)((uintptr_t)this + 0x4aa + 0)) & 1 != 0;
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::set_Success3(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4aa + 0);
    *(uint8_t*)((uintptr_t)this + 0x4aa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::get_LVL_Tutorial_BlockParry_Complete() {
    return (void*)((uintptr_t)this + 0x4d0);
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::HeroRolled_Event_0() {
    return;
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::HeroExitedZTarget_Event() {
    return;
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::HeroSwitchedZTarget_Event() {
    return;
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::HeroParrySuccess_Event(_Script_RsGameTechRT::RsCharacter* Parried_Character) {
    return;
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::NotifyHidden() {
    return;
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::UnbindAllEvents() {
    return;
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::ShowEvadeRoll() {
    return;
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::ShowTwinBlade() {
    return;
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::ShowTKMode() {
    return;
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::Shown() {
    return;
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::Dismiss(bool Instant) {
    return;
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::ExecuteUbergraph_UI_TutorialCustom(int32_t EntryPoint) {
    return;
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::LVL_Tutorial_BlockParry_Complete__DelegateSignature() {
    return;
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::LVL_Tutorial_ZTarget_Complete__DelegateSignature() {
    return;
}
void _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C::Dismissed__DelegateSignature() {
    return;
}
