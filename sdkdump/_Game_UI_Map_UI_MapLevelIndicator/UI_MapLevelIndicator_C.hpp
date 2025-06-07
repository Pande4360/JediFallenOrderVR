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
namespace _Game_UI_Map_UI_MapLevelTopND {
struct UI_MapLevelTopND_C;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Map_UI_MapLevelLowND {
struct UI_MapLevelLowND_C;
}
namespace _Game_UI_Map_UI_MapLevelIndicator {
#pragma pack(push, 1)
struct UI_MapLevelIndicator_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x1b8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Dpad();
    _Script_UMG::TextBlock*& get_LevelText();
    _Script_UMG::VerticalBox*& get_LevelVertBox();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::RetainerBox*& get_RetainerBox_1();
    _Game_UI_Map_UI_MapLevelLowND::UI_MapLevelLowND_C*& get_UI_MapLevelLowND();
    _Game_UI_Map_UI_MapLevelTopND::UI_MapLevelTopND_C*& get_UI_MapLevelTopND();
    int32_t& get_CurrentLevel();
    int32_t& get_TotalLevels();
    void* get_StyleSheet();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void Update(int32_t CurrentLevel, int32_t TotalLevels);
    void ExecuteUbergraph_UI_MapLevelIndicator(int32_t EntryPoint);
}; // Size: 0x3c0
#pragma pack(pop)
}
