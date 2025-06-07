#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsUiButton.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsUiButton_InputKeySelector : public RsUiButton {
    private: char pad_258[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
    void SetIsSelectingKey(bool bSelecting);
}; // Size: 0x260
#pragma pack(pop)
}
