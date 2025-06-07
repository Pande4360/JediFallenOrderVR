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
namespace _Script_RsGameTechRT {
struct RsWorldMapHologramBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Holomap_UI_Holomap_Secret {
#pragma pack(push, 1)
struct UI_Holomap_Secret_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x30]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::WidgetAnimation*& get_Pulse();
    _Script_UMG::Image*& get_LocalObjective();
    _Script_RsGameTechRT::RsWorldMapHologramBase*& get_HolomapRef();
    void* get_RegionName();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ExecuteUbergraph_UI_Holomap_Secret(int32_t EntryPoint);
}; // Size: 0x238
#pragma pack(pop)
}
