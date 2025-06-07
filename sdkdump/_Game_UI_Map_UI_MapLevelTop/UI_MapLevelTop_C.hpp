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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Map_UI_MapLevelTop {
#pragma pack(push, 1)
struct UI_MapLevelTop_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x48]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::TextBlock*& get_LevelNumber();
    _Script_UMG::Image*& get_MapLevelTopImg();
    void* get_StyleSheet_Holomap();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void UpdateLevelNumber(int32_t CurrentLevel);
    void ExecuteUbergraph_UI_MapLevelTop(int32_t EntryPoint);
}; // Size: 0x250
#pragma pack(pop)
}
