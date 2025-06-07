#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Widget.hpp"
namespace _Script_SlateCore {
struct SlateWidgetStyleAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct EditableTextBox : public Widget {
    private: char pad_100[0x930]; public:
    void* get_Text();
    void* get_TextDelegate();
    void* get_WidgetStyle();
    _Script_SlateCore::SlateWidgetStyleAsset*& get_Style();
    void* get_HintText();
    void* get_HintTextDelegate();
    void* get_Font();
    void* get_ForegroundColor();
    void* get_BackgroundColor();
    void* get_ReadOnlyForegroundColor();
    bool get_IsReadOnly();
    void set_IsReadOnly(bool value);
    bool get_IsPassword();
    void set_IsPassword(bool value);
    float& get_MinimumDesiredWidth();
    void* get_Padding();
    bool get_IsCaretMovedWhenGainFocus();
    void set_IsCaretMovedWhenGainFocus(bool value);
    bool get_SelectAllTextWhenFocused();
    void set_SelectAllTextWhenFocused(bool value);
    bool get_RevertTextOnEscape();
    void set_RevertTextOnEscape(bool value);
    bool get_ClearKeyboardFocusOnCommit();
    void set_ClearKeyboardFocusOnCommit(bool value);
    bool get_SelectAllTextOnCommit();
    void set_SelectAllTextOnCommit(bool value);
    bool get_AllowContextMenu();
    void set_AllowContextMenu(bool value);
    void* get_KeyboardType();
    void* get_VirtualKeyboardOptions();
    void* get_VirtualKeyboardDismissAction();
    void* get_Justification();
    void* get_ShapedTextOptions();
    void* get_OnTextChanged();
    void* get_OnTextCommitted();
    static _Script_CoreUObject::Class* static_class();
    void SetText(void* InText);
    void SetIsReadOnly(bool bReadOnly);
    void SetIsPassword(bool bIsPassword);
    void SetHintText(void* InText);
    void SetError(void* InError);
    bool HasError();
    void* GetText();
    void ClearError();
}; // Size: 0xa30
#pragma pack(pop)
}
