#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector {
struct UI_PauseMenuBtn_Selector_C;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuToggle {
struct UI_PauseMenuToggle_C;
}
namespace _Script_UMG {
struct WrapBox;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct PanelWidget;
}
namespace _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics {
struct HC_Cosmetics_C;
}
namespace _Script_RsGameTechRT {
struct RsAICharacterDefinition;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Cheats {
#pragma pack(push, 1)
struct UI_LoadableScreenWidget_Settings_Cheats_C : public _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C {
    private: char pad_230[0x2a0]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WrapBox*& get_Abilities();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnAllForcePowers();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnAllPlanets();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnKillAI();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnKillNearby();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnSpawnAI();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnToggleGodMode();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnToggleMaxForce();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnToggleMaxStamina();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnToggleNoHUD();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnToggleSlomo();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnUnlockAllCosmetics();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnUnlockForceLevel1();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnUnlockForceLevel2();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnUnlockNewGamePlus();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnUnlockSpecificAbility();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnUnlockSpecificPlanet();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_btnUnlockSpecificSkill();
    _Script_UMG::VerticalBox*& get_CheatButtonVerticalBox();
    _Script_UMG::WrapBox*& get_Enemies();
    _Script_UMG::CanvasPanel*& get_LoadingPanel();
    _Script_UMG::WrapBox*& get_Planets();
    _Script_UMG::WrapBox*& get_Skills();
    _Script_UMG::WrapBox*& get_WrapBox_0();
    void* get_AllAbilities();
    void* get_AllUpgrades();
    void* get_AllPlanets();
    void* get_PlanetLoadoutFlags();
    void* get_AbilityLoadoutFlags();
    void* get_ButtonsToLoadoutUnlocks();
    void* get_ButtonsToSkillUnlocks();
    void* get_SpawnAIList();
    void* get_ButtonsToAICharacters();
    void* get_LocalCharVal();
    _Script_UMG::PanelWidget*& get_CurrentFocusedPanel();
    bool get_LoadingEnemy();
    void set_LoadingEnemy(bool value);
    void* get_SkillUpgradeFlags();
    void* get_ForceLevel1Loadouts();
    void* get_ForceLevel2Upgrades();
    void* get_NewVar_0();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_NewVar_1();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_NewVar_2();
    static _Script_CoreUObject::Class* static_class();
    void GetHCCosmetics(_Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C*& HC_Cosmetics);
    void InitializeSkillUnlocksPanel(void*& FlagSet);
    void* Get_LoadingPanel_Visibility_0();
    void InitCheckboxes();
    void OptionalConsumeBackButton0(bool& Consumed);
    void ButtonClicked();
    void ShowMenu(_Script_UMG::PanelWidget* NewPanel);
    void InitializeAISpawnPanel();
    void CleanupEnumString(void* Enum, void*& CleanName);
    void InitializeLoadoutUnlocksPanel(void*& FlagSet, _Script_UMG::PanelWidget*& ParentPanel);
    void OnLoaded_096D0B57408EC9FB98297D9706EF5DA4(_Script_CoreUObject::Object* Loaded);
    void BndEvt__btnAllForcePowers_K2Node_ComponentBoundEvent_36_RsButtonEvent__DelegateSignature();
    void BndEvt__btnToggleSlomo_K2Node_ComponentBoundEvent_196_RsButtonEvent__DelegateSignature();
    void Construct();
    void BndEvt__btnToggleNoHUD_K2Node_ComponentBoundEvent_239_RsButtonEvent__DelegateSignature();
    void BndEvt__btnKillAI_K2Node_ComponentBoundEvent_252_RsButtonEvent__DelegateSignature();
    void BndEvt__btnToggleGodMode_K2Node_ComponentBoundEvent_291_RsButtonEvent__DelegateSignature();
    void BndEvt__btnToggleMaxStamina_K2Node_ComponentBoundEvent_102_RsButtonEvent__DelegateSignature();
    void BndEvt__btnToggleMaxForce_K2Node_ComponentBoundEvent_120_RsButtonEvent__DelegateSignature();
    void BndEvt__btnAllPlanets_K2Node_ComponentBoundEvent_104_RsButtonEvent__DelegateSignature();
    void BndEvt__btnUnlockSpecificAbility_K2Node_ComponentBoundEvent_1131_RsButtonEvent__DelegateSignature();
    void BndEvt__btnUnlockSpecificPlanet_K2Node_ComponentBoundEvent_1347_RsButtonEvent__DelegateSignature();
    void BndEvt__btnSpawnAI_K2Node_ComponentBoundEvent_40_RsButtonEvent__DelegateSignature();
    void TrySpawnSoftRef(void* Character);
    void SpawnFromDef(_Script_RsGameTechRT::RsAICharacterDefinition* Def);
    void BndEvt__btnKillNearby_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature();
    void BndEvt__btnUnlockSpecificSkill_K2Node_ComponentBoundEvent_2_RsButtonEvent__DelegateSignature();
    void BndEvt__btnUnlockAllCosmetics_K2Node_ComponentBoundEvent_3_RsButtonEvent__DelegateSignature();
    void UnlockAllForceAbilities();
    void BndEvt__btnUnlockForceLevel1_K2Node_ComponentBoundEvent_1_RsButtonEvent__DelegateSignature();
    void BndEvt__btnUnlockForceLevel2_K2Node_ComponentBoundEvent_4_RsButtonEvent__DelegateSignature();
    void BndEvt__btnUnlockNewGamePlus_K2Node_ComponentBoundEvent_5_RsButtonEvent__DelegateSignature();
    void ExecuteUbergraph_UI_LoadableScreenWidget_Settings_Cheats(int32_t EntryPoint);
}; // Size: 0x4d0
#pragma pack(pop)
}
