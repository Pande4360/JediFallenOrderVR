#include "..\FUObjectArray.hpp"
#include "BP_Croakodile_TongueSync_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_SwGame\SwGrabButtonMashState.hpp"
void _Game_Characters_Croakadile_Logic_Definitions_BP_Croakodile_TongueSync::BP_Croakodile_TongueSync_C::OnActionAnimationEnded(_Script_RsGameTechRT::RsCharacter* ActionOwner) {
    return;
}
void* _Game_Characters_Croakadile_Logic_Definitions_BP_Croakodile_TongueSync::BP_Croakodile_TongueSync_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x3c0);
}
_Script_CoreUObject::Class* _Game_Characters_Croakadile_Logic_Definitions_BP_Croakodile_TongueSync::BP_Croakodile_TongueSync_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Croakadile/Logic/Definitions/BP_Croakodile_TongueSync.BP_Croakodile_TongueSync_C");
    return result;
}
_Script_RsGameTechRT::RsCharacter*& _Game_Characters_Croakadile_Logic_Definitions_BP_Croakodile_TongueSync::BP_Croakodile_TongueSync_C::get_Attacker() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x3e0);
}
int32_t& _Game_Characters_Croakadile_Logic_Definitions_BP_Croakodile_TongueSync::BP_Croakodile_TongueSync_C::get_FailActive() {
    return *(int32_t*)((uintptr_t)this + 0x3c8);
}
_Script_Engine::Actor*& _Game_Characters_Croakadile_Logic_Definitions_BP_Croakodile_TongueSync::BP_Croakodile_TongueSync_C::get_SyncVictim() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x3d0);
}
bool _Game_Characters_Croakadile_Logic_Definitions_BP_Croakodile_TongueSync::BP_Croakodile_TongueSync_C::get_ChainBite() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d8 + 0)) & 1 != 0;
}
void _Game_Characters_Croakadile_Logic_Definitions_BP_Croakodile_TongueSync::BP_Croakodile_TongueSync_C::set_ChainBite(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Croakadile_Logic_Definitions_BP_Croakodile_TongueSync::BP_Croakodile_TongueSync_C::OnGrabStart(_Script_Engine::Actor* Victim) {
    return;
}
void _Game_Characters_Croakadile_Logic_Definitions_BP_Croakodile_TongueSync::BP_Croakodile_TongueSync_C::OnBeginAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters_Croakadile_Logic_Definitions_BP_Croakodile_TongueSync::BP_Croakodile_TongueSync_C::ExecuteUbergraph_BP_Croakodile_TongueSync(int32_t EntryPoint) {
    return;
}
