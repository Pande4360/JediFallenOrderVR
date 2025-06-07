#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsBitfield_HeroUpgradeFlags.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_RsGameTechRT {
struct RsUiWindow;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_SkillTree_UI_SkillTree_Branches {
#pragma pack(push, 1)
struct UI_SkillTree_Branches_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x258]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_OriginPoint();
    _Script_UMG::WidgetAnimation*& get_Rest();
    _Script_UMG::WidgetAnimation*& get_JediEvade();
    _Script_UMG::WidgetAnimation*& get_EffectiveHeal2();
    _Script_UMG::WidgetAnimation*& get_EffectiveHeal1();
    _Script_UMG::WidgetAnimation*& get_BlockUpgrade();
    _Script_UMG::WidgetAnimation*& get_Autodeflect();
    _Script_UMG::WidgetAnimation*& get_Health3();
    _Script_UMG::WidgetAnimation*& get_Health2();
    _Script_UMG::WidgetAnimation*& get_Push2();
    _Script_UMG::WidgetAnimation*& get_Push1();
    _Script_UMG::WidgetAnimation*& get_ForceGain();
    _Script_UMG::WidgetAnimation*& get_Pull2();
    _Script_UMG::WidgetAnimation*& get_Pull1();
    _Script_UMG::WidgetAnimation*& get_ForceHeal();
    _Script_UMG::WidgetAnimation*& get_MaxForce3();
    _Script_UMG::WidgetAnimation*& get_MaxForce2();
    _Script_UMG::WidgetAnimation*& get_MaxForce1();
    _Script_UMG::WidgetAnimation*& get_Slowdown2();
    _Script_UMG::WidgetAnimation*& get_AirFocus();
    _Script_UMG::WidgetAnimation*& get_ThrowIncrease();
    _Script_UMG::WidgetAnimation*& get_ThrowSaber();
    _Script_UMG::WidgetAnimation*& get_LeapDistance();
    _Script_UMG::WidgetAnimation*& get_FocusStaff();
    _Script_UMG::WidgetAnimation*& get_FocusAttack2();
    _Script_UMG::WidgetAnimation*& get_TransformAttack();
    _Script_UMG::WidgetAnimation*& get_DelayStaff();
    _Script_UMG::WidgetAnimation*& get_DelayAttack();
    _Script_UMG::WidgetAnimation*& get_SprintAttack();
    _Script_UMG::WidgetAnimation*& get_SavePoint();
    _Script_UMG::WidgetAnimation*& get_EvadeAttack();
    _Script_UMG::WidgetAnimation*& get_UpDmg();
    _Script_UMG::WidgetAnimation*& get_Health1();
    _Script_UMG::WidgetAnimation*& get_Leap();
    _Script_UMG::WidgetAnimation*& get_FocusAttack();
    _Script_UMG::WidgetAnimation*& get_Slowdown1();
    _Script_UMG::Image*& get_BackgroundSolid();
    _Script_UMG::Border*& get_Border_0();
    _Script_UMG::Image*& get_Branch101();
    _Script_UMG::Image*& get_Branch102();
    _Script_UMG::Image*& get_Branch104();
    _Script_UMG::Image*& get_Branch105();
    _Script_UMG::Image*& get_Branch106();
    _Script_UMG::Image*& get_Branch107();
    _Script_UMG::Image*& get_Branch108();
    _Script_UMG::Image*& get_Branch110();
    _Script_UMG::Image*& get_Branch111();
    _Script_UMG::Image*& get_Branch112();
    _Script_UMG::Image*& get_Branch113();
    _Script_UMG::Image*& get_Branch114();
    _Script_UMG::Image*& get_Branch116();
    _Script_UMG::Image*& get_Branch201();
    _Script_UMG::Image*& get_Branch202();
    _Script_UMG::Image*& get_Branch203();
    _Script_UMG::Image*& get_Branch204();
    _Script_UMG::Image*& get_Branch205();
    _Script_UMG::Image*& get_Branch206();
    _Script_UMG::Image*& get_Branch207();
    _Script_UMG::Image*& get_Branch208();
    _Script_UMG::Image*& get_Branch210();
    _Script_UMG::Image*& get_Branch211();
    _Script_UMG::Image*& get_Branch212();
    _Script_UMG::Image*& get_Branch301();
    _Script_UMG::Image*& get_Branch302();
    _Script_UMG::Image*& get_Branch303();
    _Script_UMG::Image*& get_Branch304();
    _Script_UMG::Image*& get_Branch305();
    _Script_UMG::Image*& get_Branch306();
    _Script_UMG::Image*& get_Branch307();
    _Script_UMG::Image*& get_Branch309();
    _Script_UMG::Image*& get_VoidPulse();
    _Script_RsGameTechRT::RsUiWindow*& get_ParentWindow();
    _Script_RsGameTechRT::RsUiWindow*& get_NewVar_0();
    bool get_InWorld();
    void set_InWorld(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ResetBranches();
    void Construct0();
    void CustomEvent_0(_Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags OldFlags, _Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags NewFlags);
    void InitializeHeroBindings();
    void ExecuteUbergraph_UI_SkillTree_Branches(int32_t EntryPoint);
}; // Size: 0x460
#pragma pack(pop)
}
