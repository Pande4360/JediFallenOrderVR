#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParrySuccessDescription\BP_Hero_ParrySuccessDescription_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParrySuccessDescription_Staff {
#pragma pack(push, 1)
struct BP_Hero_ParrySuccessDescription_Staff_C : public _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParrySuccessDescription::BP_Hero_ParrySuccessDescription_C {
    private: char pad_1c8[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void TickDefense(_Script_RsGameTechRT::RsCharacter* TheDefender, float DeltaTime);
    void ExecuteUbergraph_BP_Hero_ParrySuccessDescription_Staff(int32_t EntryPoint);
}; // Size: 0x1d0
#pragma pack(pop)
}
