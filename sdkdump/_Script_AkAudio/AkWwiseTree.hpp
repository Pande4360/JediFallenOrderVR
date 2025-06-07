#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AkWwiseObjectDetails.hpp"
#include "..\_Script_UMG\Widget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkWwiseTree : public _Script_UMG::Widget {
    private: char pad_100[0x40]; public:
    void* get_OnSelectionChanged();
    void* get_OnItemDragged();
    static _Script_CoreUObject::Class* static_class();
    void SetSearchText(void* newText);
    _Script_AkAudio::AkWwiseObjectDetails GetSelectedItem();
    void* GetSearchText();
}; // Size: 0x140
#pragma pack(pop)
}
