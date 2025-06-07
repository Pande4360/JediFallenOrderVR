#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_DialoguePlugin {
struct Dialogue;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Enums_ST_DatabankUnlockable {
#pragma pack(push, 1)
struct ST_DatabankUnlockable {
    private: char pad_0[0xb0]; public:
    int32_t& get_LinkListOrder_21_8F86A604491CD0A8139316B21A22F8C2();
    void* get_TitleText_3_EA0678C94951C6B39DBE4EA5BEACE0EB();
    void* get_BodyText_5_4EB1A82E43768901366FCCB352E4CFD4();
    void* get_Type_10_C18E167F4B5DACB4C7BE40B590D2095F();
    void* get_CombatHint1_26_D81458B942A60E2A38FB9CBBC0B53424();
    void* get_CombatHint2_27_9FDC131A497F46611D6AC4AF2A7A1B78();
    void* get_FeatureImage_34_02A4A8C84C3B00B7D3D1949C41B2388C();
    _Script_Engine::Texture2D*& get_TinyIcon_31_A0B0A5C940EC8EF693AC259A5294A264();
    _Script_Engine::Texture2D*& get_TinyIconOptional_33_AC89E0F74EFD07A9C2B944B87614A05F();
    _Script_DialoguePlugin::Dialogue*& get_Dialogue_37_EC3EAB5C458F5C603E3996A082E98FF1();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
