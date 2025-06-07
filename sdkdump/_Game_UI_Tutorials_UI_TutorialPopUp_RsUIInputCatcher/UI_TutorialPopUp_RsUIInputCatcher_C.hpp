#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Tutorials_UI_TutorialPopUp_RsUIInputCatcher {
#pragma pack(push, 1)
struct UI_TutorialPopUp_RsUIInputCatcher_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x18]; public:
    void* get_UberGraphFrame();
    void* get_OnWindowClosing();
    static _Script_CoreUObject::Class* static_class();
    void OnWindowClosed0();
    void ExecuteUbergraph_UI_TutorialPopUp_RsUIInputCatcher(int32_t EntryPoint);
    void OnWindowClosing__DelegateSignature();
}; // Size: 0x620
#pragma pack(pop)
}
