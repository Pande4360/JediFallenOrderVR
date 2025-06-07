#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_GlobalData_Cosmetics_Struct_CosmeticLoadout\Struct_CosmeticLoadout.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct LinearColor;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics {
#pragma pack(push, 1)
struct HC_Cosmetics_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x310]; public:
    void* get_UberGraphFrame();
    _Script_Engine::Actor*& get_Lightsaber01();
    _Script_Engine::Actor*& get_Lightsaber02();
    bool get_IsBroken();
    void set_IsBroken(bool value);
    void* get_CosmeticLoadout();
    void* get_Unlocked_Emitters();
    void* get_Unlocked_Switches();
    void* get_Unlocked_Sleeves();
    void* get_Unlocked_BD1Skins();
    void* get_Unlocked_MantisSkins();
    _Script_Engine::SkeletalMeshComponent*& get_BD1_Mesh();
    void* get_Unlocked_PonchoSkins();
    void* get_ApplyMantisDispatcher();
    void* get_Unlocked_Metal();
    void* get_Unlocked_OutfitSkin();
    float& get_Roughness();
    void* get_Tint();
    void* get_EntitlementsCosmetic();
    void* get_LVL_OnCosmeticsRefreshed();
    void* get_EntitlementUnlocks();
    void* get_Patch5FreeCosmetics();
    void* get_NGPCosmetics();
    void* get_CereSwitchSoftRef();
    void* get_CereSleeveSoftRef();
    _Script_Engine::SkeletalMeshComponent*& get_HeroRig();
    float& get_Lightsaber_Color_Value();
    void* get_PreLoadReferences();
    void* get_WesternPonchoRig();
    void* get_NormalPonchoRig();
    void* get_PlainPonchoRig();
    bool get_PreLoadedMeshes();
    void set_PreLoadedMeshes(bool value);
    void* get_LockEntitlementType();
    void* get_ApplyBD1Skin_Dispatcher();
    void* get_AllEmitters();
    void* get_AllSwitches();
    void* get_AllSleeves();
    void* get_AllBD1Skins();
    void* get_AllMantisSkins();
    void* get_AllPonchoSkins();
    void* get_AllMetals();
    void* get_AllOutfits();
    bool get_CanSwapCosmetics();
    void set_CanSwapCosmetics(bool value);
    bool get_CereSwitchSwap();
    void set_CereSwitchSwap(bool value);
    bool get_InquisitorCalActive();
    void set_InquisitorCalActive(bool value);
    void* get_AllUnlockedCosmetics();
    static _Script_CoreUObject::Class* static_class();
    void UnlockCombatChallengeRewards();
    void Init_BuildUnlockedCosmeticsSet();
    void HasCosmetic(void* Cosmetic, bool& Result);
    void UpdateGloballyUnlockedCosmeticsForNG_();
    void GetCurrentLightsaberColor(_Script_CoreUObject::LinearColor& BladeColor, _Script_CoreUObject::LinearColor& BladeGlowColor);
    void GetCurrentLightsaberColorIndex(int32_t& Index, int32_t& Count);
    void GetAllCosmeticsOfType(void* Type, void*& UnlockedCosmetics);
    void LockCosmeticEntitlement(void* Cosmetic);
    bool CanChangeCosmetics();
    void TryUnlockEntitlements();
    void* SelectEndCap(void* SleeveEnum);
    void CheckForEntitlement(void* Cosmetic, bool& IsUnlocked);
    void LVL_PickColor(float AnalogValue, _Script_CoreUObject::LinearColor& BladeColor, _Script_CoreUObject::LinearColor& BladeGlowColor, float& RTPC_LightsaberColor_Value);
    void CountLockedCosmeticsOfType(void* Type, int32_t& Count);
    void RefreshSaberMetals();
    void GetUnlockedCosmeticsOfType(void* Type, void*& UnlockedCosmetics);
    void SetCustomizationOption(_Game_GlobalData_Cosmetics_Struct_CosmeticLoadout::Struct_CosmeticLoadout CosmeticLoadout);
    void CosmeticToDisplayName(void* Cosmetic, void*& DisplayName);
    void UnlockCosmetic(void* Cosmetic, void*& CosmeticType);
    void OnLoaded_8EE0773E45937EAE170659BB7257A28E(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BBAA7D7869(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BBBB2704ED(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BB8892709D(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BB6833FBE0(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BB75A2BF94(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BB0373423C(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BBD559AC9B(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BBCDAD5CE6(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BB905271BB(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_25C453C04B2F5CD5840E9DAE5E264F06(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_25C453C04B2F5CD5840E9DAEF06C7810(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_25C453C04B2F5CD5840E9DAE1E401AD6(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_25C453C04B2F5CD5840E9DAE755596C3(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_25C453C04B2F5CD5840E9DAECAE7E307(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_25C453C04B2F5CD5840E9DAEF9759ECC(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_25C453C04B2F5CD5840E9DAE573FA9DA(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_25C453C04B2F5CD5840E9DAEB913CB1C(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_25C453C04B2F5CD5840E9DAED2064709(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BBC3E8B49D(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_25C453C04B2F5CD5840E9DAE6DB432CD(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BBC10F3EDA(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BBA34F7FF5(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BBEA2F7B10(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BB21FAFB8A(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BBD47FFD87(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BB074894D1(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_34B9DCCA4072D2CA5C0B6AA3CF89E10C(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_1E499EA84286810F840EB38957A6F5D2(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_B120315C4B5F0F84EDAC098B3F76C474(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BB959ABD72(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_34B9DCCA4072D2CA5C0B6AA3289121AF(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_1E499EA84286810F840EB389B0BE3571(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_B120315C4B5F0F84EDAC098BD86E04D7(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_BD44F1954AC94F6D60B4BCAE5DE811AC(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_BD44F1954AC94F6D60B4BCAE69342AF9(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_BD44F1954AC94F6D60B4BCAE365CA4C2(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_BD44F1954AC94F6D60B4BCAE653E91AF(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_BD44F1954AC94F6D60B4BCAEB4D04624(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_BD44F1954AC94F6D60B4BCAE9E5819D6(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_BD44F1954AC94F6D60B4BCAEDF570459(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BB2F0713C4(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_BD44F1954AC94F6D60B4BCAE2F5EC1A5(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_BD44F1954AC94F6D60B4BCAEA3C1E7B9(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_BD44F1954AC94F6D60B4BCAEB8C7DF01(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_BD44F1954AC94F6D60B4BCAE9CEC228B(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_BD44F1954AC94F6D60B4BCAE9A67C927(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_BD44F1954AC94F6D60B4BCAE73C801F4(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_BD44F1954AC94F6D60B4BCAE77C61CBA(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BB48869B14(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BB996A909F(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8EE0773E45937EAE170659BB1B6DA525(_Script_CoreUObject::Object* Loaded);
    void LVL_ApplyBD1Skin(void* Enum);
    void RefreshCosmetics();
    void InitializeCosmetics(bool AddNGPAtStart);
    void LVL_ApplyEmitter(void* Enum);
    void LVL_ApplySwitch(void* Enum);
    void LVL_ApplySleeve(void* Enum);
    void LVL_SetPonchoVisible(bool IsVisible);
    void LVL_SetLightsaberColor(void* LightsaberColor);
    void LVL_ApplyPonchoSkin(void* Enum);
    void LVL_ApplyMantisSkin();
    void LVL_CycleSaberColor(bool IncrementColor, bool IsDebug);
    void ApplySaberColor();
    void ApplySaberColorHelper(void* Enumerator);
    void LVL_ApplyRedSaber();
    void SetMetalValues();
    void LVL_SetSaberMetal(void* NewSaberMetal);
    void LVL_TryResetBD1Mesh();
    void LVL_ApplyOutfit(void* Enum);
    void LVL_ApplyCereEmitter(void* Enum);
    void PreLoadCosmetics();
    void SetInquisitorCalActiveState(bool NewActive);
    void ExecuteUbergraph_HC_Cosmetics(int32_t EntryPoint);
    void ApplyBD1Skin_Dispatcher__DelegateSignature();
    void LVL_OnCosmeticsRefreshed__DelegateSignature();
    void ApplyMantisDispatcher__DelegateSignature();
}; // Size: 0x480
#pragma pack(pop)
}
