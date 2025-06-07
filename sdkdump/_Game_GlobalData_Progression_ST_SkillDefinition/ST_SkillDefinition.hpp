#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_MediaAssets {
struct MediaPlayer;
}
namespace _Script_MediaAssets {
struct MediaSource;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Progression_ST_SkillDefinition {
#pragma pack(push, 1)
struct ST_SkillDefinition {
    private: char pad_0[0x88]; public:
    int32_t& get_SkillID_33_4CF4B5DF46912389C9BB20BAE10D2338();
    void* get_SkillType_32_101CE35A4F43C7D56797A0BE3FC4CC75();
    _Script_Engine::Texture2D*& get_Icon_42_034ABB494A40905245CFF39ADDC5547D();
    _Script_Engine::Texture2D*& get_LearnedIcon_59_3F1B890C4FD475BA5D88E894AAB860CC();
    _Script_MediaAssets::MediaPlayer*& get_SkillMediaPlayer_69_372027C84D76216BFD8481B9C6972784();
    _Script_MediaAssets::MediaSource*& get_SkillVideo_70_378179B04227F82E0BE7CB89B2700C47();
    void* get_Name_27_5FA50EE44603B5F8306DFCAFA052DA26();
    void* get_Description_28_A48213D0429FF9A15FAC0AAD3B691460();
    int32_t& get_SkillPointsRequired_18_853BEC784405609A11265099A1E5DF0D();
    void* get_UpgradeFlag_46_6808C32840CAED2F52F38C9D68CA4759();
    void* get_UnlockFlag_47_77AE3E214FBE31662AB54D97E78AE801();
    void* get_UnlockFlag02_80_4E5B9910457DC4B1170431A5851A3833();
    void* get_PrerequisiteFlag01_52_793379E64F1D5B6E293893B009202C1F();
    void* get_PrerequisiteFlag02_54_4BB67B4D41900CAEAE6123849B537C61();
    void* get_PrerequisiteFlag03_56_1110DE1B4BA1D1C458D0C6916C2821D9();
    void* get_FanfareDescription_85_1616331141ADED3D2374FCA8BD0188C0();
    void* get_PrimaryInput_76_D8F7C47340E0006C66461BAD2F98A259();
    void* get_SecondaryInput_77_B99C0CCF4ADA6105D2A11DBE8E73A92E();
    bool get_UsesForce_82_F61C434B4E0BBBCE292B38B8AA26DD49();
    void set_UsesForce_82_F61C434B4E0BBBCE292B38B8AA26DD49(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
