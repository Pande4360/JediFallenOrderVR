#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_BlockDescription\BP_Hero_BlockDescription_C.hpp"
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParryDescription {
#pragma pack(push, 1)
struct BP_Hero_ParryDescription_C : public _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BlockDescription::BP_Hero_BlockDescription_C {
    private: char pad_1b8[0x10]; public:
    void* get_UberGraphFrame0();
    _Script_CoreUObject::Object*& get_ParryAnimation();
    static _Script_CoreUObject::Class* static_class();
    void OnBeginDefense0(_Script_RsGameTechRT::RsCharacter* TheDefender);
    void Montage_Ended(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void OnEndDefense0(_Script_RsGameTechRT::RsCharacter* TheDefender);
    void ExecuteUbergraph_BP_Hero_ParryDescription(int32_t EntryPoint);
}; // Size: 0x1c8
#pragma pack(pop)
}
