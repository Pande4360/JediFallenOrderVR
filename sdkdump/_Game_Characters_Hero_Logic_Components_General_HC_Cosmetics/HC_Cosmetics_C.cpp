#include "..\FUObjectArray.hpp"
#include "HC_Cosmetics_C.hpp"
#include "..\_Game_GlobalData_Cosmetics_Struct_CosmeticLoadout\Struct_CosmeticLoadout.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BBA34F7FF5(_Script_CoreUObject::Object* Loaded) {
    return;
}
bool _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_IsBroken() {
    return (*(uint8_t*)((uintptr_t)this + 0x188 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_AllSleeves() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_AllMetals() {
    return (void*)((uintptr_t)this + 0x408);
}
_Script_Engine::Actor*& _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_Lightsaber01() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x178);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_BD44F1954AC94F6D60B4BCAE9A67C927(_Script_CoreUObject::Object* Loaded) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_NormalPonchoRig() {
    return (void*)((uintptr_t)this + 0x330);
}
_Script_Engine::Actor*& _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_Lightsaber02() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x180);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BB0373423C(_Script_CoreUObject::Object* Loaded) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_CosmeticLoadout() {
    return (void*)((uintptr_t)this + 0x189);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_BD44F1954AC94F6D60B4BCAE365CA4C2(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::UpdateGloballyUnlockedCosmeticsForNG_() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::set_IsBroken(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x188 + 0);
    *(uint8_t*)((uintptr_t)this + 0x188 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_Unlocked_Switches() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::GetCurrentLightsaberColorIndex(int32_t& Index, int32_t& Count) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_Unlocked_Emitters() {
    return (void*)((uintptr_t)this + 0x198);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_Unlocked_Sleeves() {
    return (void*)((uintptr_t)this + 0x1b8);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_AllOutfits() {
    return (void*)((uintptr_t)this + 0x418);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_Unlocked_PonchoSkins() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BBD47FFD87(_Script_CoreUObject::Object* Loaded) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_Unlocked_BD1Skins() {
    return (void*)((uintptr_t)this + 0x1c8);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/General/HC_Cosmetics.HC_Cosmetics_C");
    return result;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_Unlocked_MantisSkins() {
    return (void*)((uintptr_t)this + 0x1d8);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::LockCosmeticEntitlement(void* Cosmetic) {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_BD1_Mesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x1e8);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_34B9DCCA4072D2CA5C0B6AA3CF89E10C(_Script_CoreUObject::Object* Loaded) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_ApplyMantisDispatcher() {
    return (void*)((uintptr_t)this + 0x200);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_Unlocked_Metal() {
    return (void*)((uintptr_t)this + 0x210);
}
bool _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_InquisitorCalActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x42a + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_Unlocked_OutfitSkin() {
    return (void*)((uintptr_t)this + 0x220);
}
float& _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_Roughness() {
    return *(float*)((uintptr_t)this + 0x230);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BB959ABD72(_Script_CoreUObject::Object* Loaded) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_Tint() {
    return (void*)((uintptr_t)this + 0x234);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_EntitlementsCosmetic() {
    return (void*)((uintptr_t)this + 0x248);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::Init_BuildUnlockedCosmeticsSet() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_25C453C04B2F5CD5840E9DAE6DB432CD(_Script_CoreUObject::Object* Loaded) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_LVL_OnCosmeticsRefreshed() {
    return (void*)((uintptr_t)this + 0x258);
}
bool _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_CereSwitchSwap() {
    return (*(uint8_t*)((uintptr_t)this + 0x429 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_EntitlementUnlocks() {
    return (void*)((uintptr_t)this + 0x268);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_Patch5FreeCosmetics() {
    return (void*)((uintptr_t)this + 0x278);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BB48869B14(_Script_CoreUObject::Object* Loaded) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_AllPonchoSkins() {
    return (void*)((uintptr_t)this + 0x3f8);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_NGPCosmetics() {
    return (void*)((uintptr_t)this + 0x288);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::RefreshCosmetics() {
    return;
}
bool _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_PreLoadedMeshes() {
    return (*(uint8_t*)((uintptr_t)this + 0x380 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_CereSwitchSoftRef() {
    return (void*)((uintptr_t)this + 0x298);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_HeroRig() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x2e8);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_BD44F1954AC94F6D60B4BCAE69342AF9(_Script_CoreUObject::Object* Loaded) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_CereSleeveSoftRef() {
    return (void*)((uintptr_t)this + 0x2c0);
}
float& _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_Lightsaber_Color_Value() {
    return *(float*)((uintptr_t)this + 0x2f0);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_PreLoadReferences() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_WesternPonchoRig() {
    return (void*)((uintptr_t)this + 0x308);
}
bool _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::CanChangeCosmetics() {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_PlainPonchoRig() {
    return (void*)((uintptr_t)this + 0x358);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::GetAllCosmeticsOfType(void* Type, void*& UnlockedCosmetics) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::set_PreLoadedMeshes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x380 + 0);
    *(uint8_t*)((uintptr_t)this + 0x380 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_25C453C04B2F5CD5840E9DAE573FA9DA(_Script_CoreUObject::Object* Loaded) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_LockEntitlementType() {
    return (void*)((uintptr_t)this + 0x388);
}
bool _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_CanSwapCosmetics() {
    return (*(uint8_t*)((uintptr_t)this + 0x428 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_ApplyBD1Skin_Dispatcher() {
    return (void*)((uintptr_t)this + 0x398);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_B120315C4B5F0F84EDAC098B3F76C474(_Script_CoreUObject::Object* Loaded) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_AllEmitters() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::UnlockCombatChallengeRewards() {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_AllSwitches() {
    return (void*)((uintptr_t)this + 0x3b8);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BB21FAFB8A(_Script_CoreUObject::Object* Loaded) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_AllBD1Skins() {
    return (void*)((uintptr_t)this + 0x3d8);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::GetCurrentLightsaberColor(_Script_CoreUObject::LinearColor& BladeColor, _Script_CoreUObject::LinearColor& BladeGlowColor) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_AllMantisSkins() {
    return (void*)((uintptr_t)this + 0x3e8);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::set_CanSwapCosmetics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x428 + 0);
    *(uint8_t*)((uintptr_t)this + 0x428 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BB1B6DA525(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::set_CereSwitchSwap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x429 + 0);
    *(uint8_t*)((uintptr_t)this + 0x429 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::ApplyMantisDispatcher__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::set_InquisitorCalActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x42a + 0);
    *(uint8_t*)((uintptr_t)this + 0x42a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::get_AllUnlockedCosmetics() {
    return (void*)((uintptr_t)this + 0x430);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::HasCosmetic(void* Cosmetic, bool& Result) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::TryUnlockEntitlements() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_25C453C04B2F5CD5840E9DAED2064709(_Script_CoreUObject::Object* Loaded) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::SelectEndCap(void* SleeveEnum) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_BD44F1954AC94F6D60B4BCAE9CEC228B(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::CheckForEntitlement(void* Cosmetic, bool& IsUnlocked) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::LVL_PickColor(float AnalogValue, _Script_CoreUObject::LinearColor& BladeColor, _Script_CoreUObject::LinearColor& BladeGlowColor, float& RTPC_LightsaberColor_Value) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::CountLockedCosmeticsOfType(void* Type, int32_t& Count) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::RefreshSaberMetals() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::GetUnlockedCosmeticsOfType(void* Type, void*& UnlockedCosmetics) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::SetCustomizationOption(_Game_GlobalData_Cosmetics_Struct_CosmeticLoadout::Struct_CosmeticLoadout CosmeticLoadout) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::CosmeticToDisplayName(void* Cosmetic, void*& DisplayName) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BB2F0713C4(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::UnlockCosmetic(void* Cosmetic, void*& CosmeticType) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BB7257A28E(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BBAA7D7869(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BBBB2704ED(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BB8892709D(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BB6833FBE0(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BB75A2BF94(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BBD559AC9B(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BBCDAD5CE6(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BB905271BB(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_25C453C04B2F5CD5840E9DAE5E264F06(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_25C453C04B2F5CD5840E9DAEF06C7810(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_25C453C04B2F5CD5840E9DAE1E401AD6(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_25C453C04B2F5CD5840E9DAE755596C3(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_25C453C04B2F5CD5840E9DAECAE7E307(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_25C453C04B2F5CD5840E9DAEF9759ECC(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_25C453C04B2F5CD5840E9DAEB913CB1C(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BBC3E8B49D(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BBC10F3EDA(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BBEA2F7B10(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BB074894D1(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_1E499EA84286810F840EB38957A6F5D2(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_34B9DCCA4072D2CA5C0B6AA3289121AF(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_1E499EA84286810F840EB389B0BE3571(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_B120315C4B5F0F84EDAC098BD86E04D7(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_BD44F1954AC94F6D60B4BCAE5DE811AC(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_BD44F1954AC94F6D60B4BCAE653E91AF(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_BD44F1954AC94F6D60B4BCAEB4D04624(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_BD44F1954AC94F6D60B4BCAE9E5819D6(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_BD44F1954AC94F6D60B4BCAEDF570459(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_BD44F1954AC94F6D60B4BCAE2F5EC1A5(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_BD44F1954AC94F6D60B4BCAEA3C1E7B9(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_BD44F1954AC94F6D60B4BCAEB8C7DF01(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_BD44F1954AC94F6D60B4BCAE73C801F4(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_BD44F1954AC94F6D60B4BCAE77C61CBA(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::OnLoaded_8EE0773E45937EAE170659BB996A909F(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::LVL_ApplyBD1Skin(void* Enum) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::InitializeCosmetics(bool AddNGPAtStart) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::LVL_ApplyEmitter(void* Enum) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::LVL_ApplySwitch(void* Enum) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::LVL_ApplySleeve(void* Enum) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::LVL_SetPonchoVisible(bool IsVisible) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::LVL_SetLightsaberColor(void* LightsaberColor) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::LVL_ApplyPonchoSkin(void* Enum) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::LVL_ApplyMantisSkin() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::LVL_CycleSaberColor(bool IncrementColor, bool IsDebug) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::ApplySaberColor() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::ApplySaberColorHelper(void* Enumerator) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::LVL_ApplyRedSaber() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::SetMetalValues() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::LVL_SetSaberMetal(void* NewSaberMetal) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::LVL_TryResetBD1Mesh() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::LVL_ApplyOutfit(void* Enum) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::LVL_ApplyCereEmitter(void* Enum) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::PreLoadCosmetics() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::SetInquisitorCalActiveState(bool NewActive) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::ExecuteUbergraph_HC_Cosmetics(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::ApplyBD1Skin_Dispatcher__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C::LVL_OnCosmeticsRefreshed__DelegateSignature() {
    return;
}
