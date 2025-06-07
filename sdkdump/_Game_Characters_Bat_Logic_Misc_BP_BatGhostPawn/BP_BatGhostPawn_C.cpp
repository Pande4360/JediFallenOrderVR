#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_ATST00_Misc_BP_GhostPawn\BP_GhostPawn_C.hpp"
#include "BP_BatGhostPawn_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Game_Characters_Bat_Logic_Misc_BP_BatGhostPawn::BP_BatGhostPawn_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Bat/Logic/Misc/BP_BatGhostPawn.BP_BatGhostPawn_C");
    return result;
}
