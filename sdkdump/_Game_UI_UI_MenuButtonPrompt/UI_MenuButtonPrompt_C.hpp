#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_UI_UI_MenuButtonPrompt_Content {
struct UI_MenuButtonPrompt_Content_C;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct ScaleBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_UI_MenuButtonPrompt {
#pragma pack(push, 1)
struct UI_MenuButtonPrompt_C : public _Script_RsGameTechRT::RsUiButton {
    private: char pad_258[0x120]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Pulsing();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_0();
    _Script_UMG::HorizontalBox*& get_HorizontalBox_0();
    _Script_UMG::ScaleBox*& get_Scaler();
    _Game_UI_UI_MenuButtonPrompt_Content::UI_MenuButtonPrompt_Content_C*& get_UI_MenuButtonPrompt_Content();
    void* get_InputButton();
    void* get_UI_Accept();
    void* get_UI_Cancel();
    bool get_Don_tUpdateOnConstruct();
    void set_Don_tUpdateOnConstruct(bool value);
    bool get_IsAxis();
    void set_IsAxis(bool value);
    bool get_IsPositiveAxis();
    void set_IsPositiveAxis(bool value);
    void* get_InputAction();
    void* get_ButtonSize();
    int32_t& get_ButtonType();
    void* get_ButtonPosition();
    bool get_SkipResettingKey();
    void set_SkipResettingKey(bool value);
    void* get_ExtraButtons();
    void* get_KeyToString();
    void* get_KeyToImage();
    static _Script_CoreUObject::Class* static_class();
    void KMBKeyOverride(void* Action, _Script_InputCore::Key Override);
    void GetMovementAxisKey(bool IsVertical, bool IsPositive, _Script_InputCore::Key& Key);
    void SetMKBContent(_Game_UI_UI_MenuButtonPrompt_Content::UI_MenuButtonPrompt_Content_C* Content, _Script_InputCore::Key InputKey);
    bool ActionIsLeftStick(void* InputPin);
    bool ActionIsRightStick(void* InputPin);
    void SetKeyForAction();
    void Construct();
    void UpdateButton();
    void DirectSetKeyUpdateButton(_Script_InputCore::Key InputButton);
    void InputDeviceChanged(void* NewInputDevice);
    void UpdateScale();
    void PreConstruct(bool IsDesignTime);
    void ShowButtonPrompt(_Script_InputCore::Key InputButton, bool IsPulsing);
    void HideButton();
    void ShowKMBLook();
    void ShowKMBMove();
    void CreateNewContent(_Script_InputCore::Key InputKey);
    void RemoveExtraButtons();
    void UpdateInputAction(void* InputAction);
    void ExecuteUbergraph_UI_MenuButtonPrompt(int32_t EntryPoint);
}; // Size: 0x378
#pragma pack(pop)
}
