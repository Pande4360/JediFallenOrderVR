#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Holomap_UI_LocalMissionObjective {
#pragma pack(push, 1)
struct UI_LocalMissionObjective_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0xc0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Pulse();
    _Script_UMG::Image*& get_Arrow();
    _Script_UMG::Image*& get_LocalObjective();
    void* get_IconMats();
    void* get_StemMats();
    static _Script_CoreUObject::Class* static_class();
    void UpdateArrow(bool IsOnScreen, _Script_CoreUObject::Vector2D OriinalScreenPos, _Script_CoreUObject::Vector2D FinalScreenPos);
    void Construct();
    void ExecuteUbergraph_UI_LocalMissionObjective(int32_t EntryPoint);
}; // Size: 0x6c8
#pragma pack(pop)
}
