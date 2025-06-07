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
namespace _Game_UI_Map_UI_MapLevelTopND {
#pragma pack(push, 1)
struct UI_MapLevelTopND_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x38]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_MapLevelTopImg();
    void* get_StyleSheet_Holomap();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void UpdateLevelNumber(int32_t CurrentLevel);
    void Activate();
    void ExecuteUbergraph_UI_MapLevelTopND(int32_t EntryPoint);
}; // Size: 0x240
#pragma pack(pop)
}
