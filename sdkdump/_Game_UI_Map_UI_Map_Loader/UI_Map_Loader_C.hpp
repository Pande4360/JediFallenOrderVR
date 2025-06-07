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
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Map_UI_Map_Loader {
#pragma pack(push, 1)
struct UI_Map_Loader_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x28]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Loop();
    _Script_UMG::Image*& get_LoaderImage();
    int32_t& get_Frame();
    _Script_Engine::MaterialInstanceDynamic*& get_LoaderMaterial();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ExecuteUbergraph_UI_Map_Loader(int32_t EntryPoint);
}; // Size: 0x230
#pragma pack(pop)
}
