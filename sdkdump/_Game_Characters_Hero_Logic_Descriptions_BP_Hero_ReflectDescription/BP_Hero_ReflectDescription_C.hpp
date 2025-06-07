#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_BlockDescription\BP_Hero_BlockDescription_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ReflectDescription {
#pragma pack(push, 1)
struct BP_Hero_ReflectDescription_C : public _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BlockDescription::BP_Hero_BlockDescription_C {
    private: char pad_1b8[0x8]; public:
    void* get_UberGraphFrame0();
    static _Script_CoreUObject::Class* static_class();
    void OnBeginDefense0(_Script_RsGameTechRT::RsCharacter* TheDefender);
    void OnEndDefense0(_Script_RsGameTechRT::RsCharacter* TheDefender);
    void ExecuteUbergraph_BP_Hero_ReflectDescription(int32_t EntryPoint);
}; // Size: 0x1c0
#pragma pack(pop)
}
