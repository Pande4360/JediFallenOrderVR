#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsDesignableUserWidget : public _Script_UMG::UserWidget {
    static _Script_CoreUObject::Class* static_class();
    void OnSynchronizeProperties();
}; // Size: 0x208
#pragma pack(pop)
}
