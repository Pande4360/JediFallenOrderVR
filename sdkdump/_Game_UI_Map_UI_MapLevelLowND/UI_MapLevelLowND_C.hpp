#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Map_UI_MapLevelLowND {
#pragma pack(push, 1)
struct UI_MapLevelLowND_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x50]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_0();
    void* get_TintColor();
    bool get_ui_ss_holomap();
    void set_ui_ss_holomap(bool value);
    void* get_StyleSheet_Holomap();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void Activate();
    void ExecuteUbergraph_UI_MapLevelLowND(int32_t EntryPoint);
}; // Size: 0x258
#pragma pack(pop)
}
