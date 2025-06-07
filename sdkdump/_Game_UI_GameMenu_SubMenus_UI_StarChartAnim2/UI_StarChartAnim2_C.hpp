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
namespace _Game_UI_GameMenu_SubMenus_UI_StarChartAnim2 {
#pragma pack(push, 1)
struct UI_StarChartAnim2_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x2c0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_DatabankEntry();
    _Script_UMG::WidgetAnimation*& get_Next();
    _Script_UMG::WidgetAnimation*& get_Intro2();
    _Script_UMG::WidgetAnimation*& get_Loop();
    _Script_UMG::WidgetAnimation*& get_Intro();
    _Script_UMG::Image*& get_Circle1();
    _Script_UMG::Image*& get_Circle10();
    _Script_UMG::Image*& get_Circle11();
    _Script_UMG::Image*& get_Circle12();
    _Script_UMG::Image*& get_Circle13();
    _Script_UMG::Image*& get_Circle14();
    _Script_UMG::Image*& get_Circle15();
    _Script_UMG::Image*& get_Circle1B();
    _Script_UMG::Image*& get_Circle2();
    _Script_UMG::Image*& get_Circle3();
    _Script_UMG::Image*& get_Circle4();
    _Script_UMG::Image*& get_Circle5();
    _Script_UMG::Image*& get_Circle6();
    _Script_UMG::Image*& get_Circle7();
    _Script_UMG::Image*& get_Circle8();
    _Script_UMG::Image*& get_Circle9();
    _Script_UMG::Image*& get_FillCircle1();
    _Script_UMG::Image*& get_FillCircle10();
    _Script_UMG::Image*& get_FillCircle11();
    _Script_UMG::Image*& get_FillCircle2();
    _Script_UMG::Image*& get_FillCircle3();
    _Script_UMG::Image*& get_FillCircle4();
    _Script_UMG::Image*& get_FillCircle5();
    _Script_UMG::Image*& get_FillCircle6();
    _Script_UMG::Image*& get_FillCircle7();
    _Script_UMG::Image*& get_FillCircle8();
    _Script_UMG::Image*& get_FillCircle9();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::Image*& get_Image_2();
    _Script_UMG::Image*& get_Image_3();
    _Script_UMG::Image*& get_Image_4();
    _Script_UMG::Image*& get_Image_5();
    _Script_UMG::Image*& get_Image_6();
    _Script_UMG::Image*& get_Image_7();
    _Script_UMG::Image*& get_Image_8();
    _Script_UMG::Image*& get_Image_9();
    _Script_UMG::Image*& get_Image_10();
    _Script_UMG::Image*& get_Image_11();
    _Script_UMG::Image*& get_Image_12();
    _Script_UMG::Image*& get_Image_13();
    _Script_UMG::Image*& get_Image_14();
    _Script_UMG::Image*& get_Image_15();
    _Script_UMG::Image*& get_Image_16();
    _Script_UMG::Image*& get_Image_17();
    _Script_UMG::Image*& get_Image_18();
    _Script_UMG::Image*& get_Image_19();
    _Script_UMG::Image*& get_Image_20();
    _Script_UMG::Image*& get_Image_21();
    _Script_UMG::Image*& get_Image_22();
    _Script_UMG::Image*& get_Image_23();
    _Script_UMG::Image*& get_Image_24();
    _Script_UMG::Image*& get_Image_25();
    _Script_UMG::Image*& get_Image_26();
    _Script_UMG::Image*& get_Image_27();
    _Script_UMG::Image*& get_Image_28();
    _Script_UMG::Image*& get_Image_29();
    _Script_UMG::Image*& get_Image_30();
    _Script_UMG::Image*& get_Image_31();
    _Script_UMG::Image*& get_Image_32();
    _Script_UMG::Image*& get_Image_33();
    _Script_UMG::Image*& get_Image_34();
    _Script_UMG::Image*& get_Image_35();
    _Script_UMG::Image*& get_Image_36();
    _Script_UMG::Image*& get_Image_37();
    _Script_UMG::Image*& get_Image_38();
    _Script_UMG::Image*& get_Image_39();
    _Script_UMG::Image*& get_Image_40();
    _Script_UMG::Image*& get_Image_41();
    _Script_UMG::Image*& get_Image_42();
    _Script_UMG::Image*& get_Image_43();
    _Script_UMG::Image*& get_Image_44();
    _Script_UMG::Image*& get_Image_45();
    _Script_UMG::Image*& get_Image_50();
    _Script_UMG::Image*& get_Image_51();
    _Script_UMG::Image*& get_Image_52();
    _Script_UMG::Image*& get_Image_53();
    _Script_RsTechRT::RsLine*& get_RsLine_0();
    _Script_RsTechRT::RsLine*& get_RsLine_1();
    _Script_RsTechRT::RsLine*& get_RsLine_2();
    _Script_UMG::TextBlock*& get_TextBlock_1();
    _Script_UMG::TextBlock*& get_TextBlock_3();
    _Script_UMG::TextBlock*& get_TextBlock_4();
    static _Script_CoreUObject::Class* static_class();
    void PlayStarChartAnim2();
    void CustomEvent_0();
    void ExecuteUbergraph_UI_StarChartAnim2(int32_t EntryPoint);
}; // Size: 0x4c8
#pragma pack(pop)
}
