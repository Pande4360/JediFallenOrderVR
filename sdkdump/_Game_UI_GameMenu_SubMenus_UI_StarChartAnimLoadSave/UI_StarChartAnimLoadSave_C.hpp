#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_SubMenus_UI_StarChartAnimLoadSave {
#pragma pack(push, 1)
struct UI_StarChartAnimLoadSave_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x50]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Loop();
    _Script_UMG::WidgetAnimation*& get_Intro();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_10();
    _Script_UMG::Image*& get_InnerRing();
    _Script_UMG::Image*& get_JediLogo();
    _Script_UMG::Image*& get_MidRing();
    _Script_UMG::RetainerBox*& get_RetainerBox_1();
    _Script_UMG::Image*& get_Solid1();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ExecuteUbergraph_UI_StarChartAnimLoadSave(int32_t EntryPoint);
}; // Size: 0x258
#pragma pack(pop)
}
