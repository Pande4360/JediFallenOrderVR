#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "TextLayoutWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct MultiLineEditableText : public TextLayoutWidget {
    private: char pad_128[0x2c8]; public:
    void* get_Text();
    void* get_HintText();
    void* get_HintTextDelegate();
    void* get_WidgetStyle();
    bool get_bIsReadOnly();
    void set_bIsReadOnly(bool value);
    void* get_Font();
    bool get_SelectAllTextWhenFocused();
    void set_SelectAllTextWhenFocused(bool value);
    bool get_ClearTextSelectionOnFocusLoss();
    void set_ClearTextSelectionOnFocusLoss(bool value);
    bool get_RevertTextOnEscape();
    void set_RevertTextOnEscape(bool value);
    bool get_ClearKeyboardFocusOnCommit();
    void set_ClearKeyboardFocusOnCommit(bool value);
    bool get_AllowContextMenu();
    void set_AllowContextMenu(bool value);
    void* get_VirtualKeyboardOptions();
    void* get_VirtualKeyboardDismissAction();
    void* get_OnTextChanged();
    void* get_OnTextCommitted();
    static _Script_CoreUObject::Class* static_class();
    void SetText(void* InText);
    void SetIsReadOnly(bool bReadOnly);
    void* GetText();
}; // Size: 0x3f0
#pragma pack(pop)
}
