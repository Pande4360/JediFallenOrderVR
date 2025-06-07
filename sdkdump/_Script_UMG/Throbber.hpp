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
struct Throbber : public Widget {
    private: char pad_100[0xa8]; public:
    int32_t& get_NumberOfPieces();
    bool get_bAnimateHorizontally();
    void set_bAnimateHorizontally(bool value);
    bool get_bAnimateVertically();
    void set_bAnimateVertically(bool value);
    bool get_bAnimateOpacity();
    void set_bAnimateOpacity(bool value);
    _Script_Engine::SlateBrushAsset*& get_PieceImage();
    void* get_Image();
    static _Script_CoreUObject::Class* static_class();
    void SetNumberOfPieces(int32_t InNumberOfPieces);
    void SetAnimateVertically(bool bInAnimateVertically);
    void SetAnimateOpacity(bool bInAnimateOpacity);
    void SetAnimateHorizontally(bool bInAnimateHorizontally);
}; // Size: 0x1a8
#pragma pack(pop)
}
