#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Widget.hpp"
namespace _Script_Engine {
struct SlateBrushAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct CircularThrobber : public Widget {
    private: char pad_100[0xb8]; public:
    int32_t& get_NumberOfPieces();
    float& get_Period();
    float& get_Radius();
    _Script_Engine::SlateBrushAsset*& get_PieceImage();
    void* get_Image();
    bool get_bEnableRadius();
    void set_bEnableRadius(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetRadius(float InRadius);
    void SetPeriod(float InPeriod);
    void SetNumberOfPieces(int32_t InNumberOfPieces);
}; // Size: 0x1b8
#pragma pack(pop)
}
