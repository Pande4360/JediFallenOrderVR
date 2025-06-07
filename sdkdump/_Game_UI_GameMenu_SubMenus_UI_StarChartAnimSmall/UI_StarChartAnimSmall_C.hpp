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
namespace _Script_RsTechRT {
struct RsLine;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_SubMenus_UI_StarChartAnimSmall {
#pragma pack(push, 1)
struct UI_StarChartAnimSmall_C : public _Script_UMG::UserWidget {
    private: char pad_208[0xc0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Loop();
    _Script_UMG::WidgetAnimation*& get_Intro();
    _Script_UMG::Image*& get_BigOuterRing();
    _Script_UMG::Image*& get_BigOval();
    _Script_UMG::Image*& get_DoubleInner();
    _Script_UMG::Image*& get_DoubleOuter();
    _Script_UMG::Image*& get_Image_5();
    _Script_UMG::Image*& get_Image_6();
    _Script_UMG::Image*& get_Image_7();
    _Script_UMG::Image*& get_Image_10();
    _Script_UMG::Image*& get_InnerRing();
    _Script_UMG::Image*& get_JediLogoBlur();
    _Script_UMG::Image*& get_JediLogoSharp();
    _Script_UMG::Image*& get_LonelyBoy();
    _Script_UMG::Image*& get_MidRing();
    _Script_UMG::Image*& get_OuterOrbit();
    _Script_RsTechRT::RsLine*& get_RsLine_0();
    _Script_RsTechRT::RsLine*& get_RsLine_23();
    _Script_UMG::Image*& get_Solid1();
    _Script_UMG::Image*& get_Solid2();
    _Script_UMG::Image*& get_Solid3();
    _Script_UMG::Image*& get_Tangent();
    _Script_UMG::TextBlock*& get_TextBlock_0();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ExecuteUbergraph_UI_StarChartAnimSmall(int32_t EntryPoint);
}; // Size: 0x2c8
#pragma pack(pop)
}
