#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_Interfaces_INT_UMG_URLResponsive {
#pragma pack(push, 1)
struct INT_UMG_URLResponsive_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void UMG_GetTargetURL(_Script_GameplayTags::GameplayTag& TargetURL);
    void UMG_UpdateURL(_Script_GameplayTags::GameplayTag NewUrl, bool& Result);
}; // Size: 0x28
#pragma pack(pop)
}
