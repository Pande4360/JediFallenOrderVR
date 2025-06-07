#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_RsTechRT {
struct RsLine;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuToggle {
struct UI_PauseMenuToggle_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_ConfirmationModal {
#pragma pack(push, 1)
struct UI_ConfirmationModal_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x100]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_AcceptHover();
    _Script_UMG::WidgetAnimation*& get_CancelHover();
    _Script_UMG::WidgetAnimation*& get_BorderAnimLoop();
    _Script_UMG::WidgetAnimation*& get_CancelBtnPress();
    _Script_UMG::Button*& get_Accept();
    _Script_UMG::Image*& get_AcceptBG();
    _Script_UMG::Image*& get_AcceptBorder();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_AcceptBtn();
    _Script_UMG::Image*& get_AcceptFocus();
    _Script_UMG::TextBlock*& get_AcceptText();
    _Script_UMG::Image*& get_Backing();
    _Script_UMG::Image*& get_Border();
    _Script_UMG::Image*& get_BorderAnim();
    _Script_UMG::Image*& get_CancelBG();
    _Script_UMG::Button*& get_CancelBtn();
    _Script_UMG::Image*& get_CancelFocused();
    _Script_UMG::TextBlock*& get_CancelText();
    _Script_UMG::CanvasPanel*& get_ConfirmationModal();
    _Script_UMG::Image*& get_Image_2();
    _Script_UMG::Image*& get_Image_3();
    _Script_UMG::Image*& get_Image_4();
    _Script_UMG::Image*& get_Linework();
    _Script_RsTechRT::RsLine*& get_RsLine_0();
    _Script_RsTechRT::RsLine*& get_RsLine_1();
    _Script_UMG::TextBlock*& get_Time();
    _Script_UMG::TextBlock*& get_Txt_SaveThisRes();
    void* get_OnModalClosed();
    float& get_Timer();
    void* get_OnModalCanceled();
    static _Script_CoreUObject::Class* static_class();
    void Construct();
    void CancelResolution(void* Action);
    void BndEvt__UI_PauseMenuToggle_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature();
    void OnAnimationFinished_Event_0();
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Accept_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__CancelBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Accept_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Accept_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__CancelBtn_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__CancelBtn_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_ConfirmationModal(int32_t EntryPoint);
    void OnModalCanceled__DelegateSignature();
    void OnModalClosed__DelegateSignature();
}; // Size: 0x708
#pragma pack(pop)
}
