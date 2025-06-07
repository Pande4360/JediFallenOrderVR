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
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParrySuccessDescription {
#pragma pack(push, 1)
struct BP_Hero_ParrySuccessDescription_C : public _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BlockDescription::BP_Hero_BlockDescription_C {
    private: char pad_1b8[0x10]; public:
    void* get_UberGraphFrame0();
    bool get_AttackWindowOpen();
    void set_AttackWindowOpen(bool value);
    static _Script_CoreUObject::Class* static_class();
    void OnBeginDefense0(_Script_RsGameTechRT::RsCharacter* TheDefender);
    void OnEndDefense0(_Script_RsGameTechRT::RsCharacter* TheDefender);
    void TickDefense0(_Script_RsGameTechRT::RsCharacter* TheDefender, float DeltaTime);
    void Close_Attack_Window();
    void ExecuteUbergraph_BP_Hero_ParrySuccessDescription(int32_t EntryPoint);
}; // Size: 0x1c8
#pragma pack(pop)
}
