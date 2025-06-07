#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_ReflectDescription\BP_Hero_ReflectDescription_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ReflectDescription_Staff {
#pragma pack(push, 1)
struct BP_Hero_ReflectDescription_Staff_C : public _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ReflectDescription::BP_Hero_ReflectDescription_C {
    private: char pad_1c0[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void TickDefense(_Script_RsGameTechRT::RsCharacter* TheDefender, float DeltaTime);
    void CheckGoToBlock(_Script_RsGameTechRT::RsCharacter* Defender);
    void OnBeginDefense(_Script_RsGameTechRT::RsCharacter* TheDefender);
    void ExecuteUbergraph_BP_Hero_ReflectDescription_Staff(int32_t EntryPoint);
}; // Size: 0x1c8
#pragma pack(pop)
}
