#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder {
#pragma pack(push, 1)
struct UI_Widget_PipHolder_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x70]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::Image*& get_Image_2();
    _Script_UMG::Image*& get_Image_3();
    _Script_UMG::TextBlock*& get_PipCurrent();
    _Script_UMG::HorizontalBox*& get_PipHolder();
    _Script_UMG::TextBlock*& get_PipTotal();
    void* get_PipTags();
    int32_t& get_CurrentFocusedPip();
    void* get_UnlockedPipIndices();
    int32_t& get_TotalPips();
    static _Script_CoreUObject::Class* static_class();
    void GetNextNavigablePip(void* Direction, int32_t& Index, bool& Found);
    void UpdateFocusedPip(int32_t Index);
    void SetPips(void*& PipContentTags);
    void ExecuteUbergraph_UI_Widget_PipHolder(int32_t EntryPoint);
}; // Size: 0x278
#pragma pack(pop)
}
